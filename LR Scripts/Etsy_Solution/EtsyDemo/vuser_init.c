/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("www.etsy.com", 
		"URL=https://www.etsy.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("tags.js", 
		"URL=https://www.etsy.com/include/tags.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("Graphik-Regular-Web.woff2", 
		"URL=https://www.etsy.com/assets/type/Graphik-Regular-Web.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.etsy.com/dac/site-chrome/components/components.98d8c144599178,web-toolkit-v2/experiments/ehi.98d8c144599178,site-chrome/header/header.62074f2665491f,__modules__MiniCart__src__/Overlay/OverlayView.98d8c144599178,__modules__CategoryNav__src__/Views/DropdownMenu/Menu.6173806e9e5c13,site-chrome/footer/footer.98d8c144599178,gdpr/settings-overlay.98d8c144599178.css?variant=sasquatch", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("Guardian-EgypTT-Light.woff2", 
		"URL=https://www.etsy.com/assets/type/Guardian-EgypTT-Light.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.etsy.com/dac/site-chrome/components/components.98d8c144599178,web-toolkit-v2/experiments/ehi.98d8c144599178,site-chrome/header/header.62074f2665491f,__modules__MiniCart__src__/Overlay/OverlayView.98d8c144599178,__modules__CategoryNav__src__/Views/DropdownMenu/Menu.6173806e9e5c13,site-chrome/footer/footer.98d8c144599178,gdpr/settings-overlay.98d8c144599178.css?variant=sasquatch", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("Graphik-Medium-Web.woff2", 
		"URL=https://www.etsy.com/assets/type/Graphik-Medium-Web.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.etsy.com/dac/site-chrome/components/components.98d8c144599178,web-toolkit-v2/experiments/ehi.98d8c144599178,site-chrome/header/header.62074f2665491f,__modules__MiniCart__src__/Overlay/OverlayView.98d8c144599178,__modules__CategoryNav__src__/Views/DropdownMenu/Menu.6173806e9e5c13,site-chrome/footer/footer.98d8c144599178,gdpr/settings-overlay.98d8c144599178.css?variant=sasquatch", 
		"Snapshot=t5.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("beacon", 
		"URL=https://www.etsy.com/bcn/beacon", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"guid\":\"f881ef167bd.7c12f37f6f8e5c6fcf58.00\",\"event_name\":\"home_complementary\",\"event_logger\":\"frontend\",\"event_timestamp\":1707730910810,\"primary_complement\":true,\"viewport_width\":1263,\"viewport_height\":593,\"screen_height\":720,\"screen_width\":1280,\"device_pixel_ratio\":1,\"dark_mode_enabled\":false,\"attempted_send_beacon\":true}],\"shared\":{\"ab\":{\"xplat.runtime_config_service.ramp\":[\"on\",\"x\",\"b4354c\"],\"orm_latency\":[\"off\",\"x\",\"091448\"]"
		",\"home_living_web.device_atlas_3_upgrade\":[\"off\",\"x\",\"146ab4\"],\"international.languages.pl\":[\"on\",\"x\",\"bb315a\"],\"scraper_protection.datadome.jan_2024_comparison\":[\"on\",\"m\",\"a072c9\"],\"neu_configurablerouter_homepage\":[\"on\",\"w\",\"ac29a5\"],\"design_systems.ehi_phase_3_v2\":[\"on\",\"w\",\"e1b3e6\"],\"site_chrome/buyer_to_seller_navbar_signed_out\":[\"ineligible\",\"e\",\"0efe99\"],\"web_performance.fix_image_domain_resource_hints\":[\"off\",\"x\",\"4fde70\"],\""
		"dynamic_experiments.Merch_GiftMode24_Teaser_test\":[\"ineligible\",\"e\",\"3ad555\"],\"checkout.gift_card_cta_in_search_dropdown\":[\"on\",\"x\",\"931866\"],\"persistent_experiment.q1_2024\":[\"on\",\"w\",\"dc2661\"],\"ranking/search.experience.xml_autosuggest_desktop_v3\":[\"ineligible\",\"e\",\"5f637e\"],\"ranking/search.experience.xml_autosuggest_mweb_v3\":[\"ineligible\",\"e\",\"6f8d5d\"],\"ranking/search.experience.xml_autosuggest_desktop\":[\"ineligible\",\"e\",\"c1e93d\"],\"ranking/"
		"search.experience.xml_autosuggest_mweb\":[\"ineligible\",\"e\",\"3139a6\"],\"lingtools/trending_searches.gcp\":[\"ineligible\",\"e\",\"5cfa03\"],\"site_chrome/buyer_to_seller_navbar_signed_in\":[\"ineligible\",\"e\",\"67649b\"],\"site_chrome/buyer_zipcode_in_header_desktop\":[\"off\",\"x\",\"eb55bf\"],\"site_chrome/buyer_zipcode_in_header_mweb\":[\"ineligible\",\"e\",\"5d612c\"],\"ranking/search.experience.search_bar_a11y\":[\"on\",\"x\",\"6c887f\"],\"stitcha.handle_all_js\":[\"off\",\"x\",\""
		"2b84e3\"],\"builda_scss\":[\"sasquatch\",\"x\",\"96bd82\"],\"polyfills\":[\"on\",\"x\",\"db574b\"],\"polyfill_experiment_4\":[\"no_filtering\",\"x\",\"0e8409\"],\"navx.fnb_in_india\":[\"off\",\"x\",\"f41a09\"],\"navx.sw_visual_subnav\":[\"off\",\"x\",\"7a80c1\"],\"navx.sw_l2_ill\":[\"off\",\"x\",\"a755cc\"],\"navx.acm_sw_india\":[\"on\",\"x\",\"c46bd9\"],\"navx.dark_overlay_v2\":[\"on\",\"x\",\"878964\"],\"navx.sw_l2_cards\":[\"on\",\"w\",\"9722a8\"],\"navx.acm_to_market\":[\"off\",\"x\",\"4d91e1"
		"\"],\"navx.simplify_parent_nodes\":[\"ineligible\",\"e\",\"5ea89e\"],\"gifting.gnav_desktop_flyout\":[\"ineligible\",\"e\",\"55be9d\"],\"granify\":[\"ineligible\",\"e\",\"b5f12d\"],\"onsite_promos.contentful_promos\":[\"off\",\"x\",\"9b91c6\"],\"onsite_promos.superbowl\":[\"ineligible\",\"e\",\"0addba\"],\"core-localisation.sales_and_deals_banners.deals_of_the_day\":[\"on\",\"x\",\"facf93\"],\"buyers_often_buying.remove_popular_right_now\":[\"off\",\"x\",\"84f976\"],\""
		"buyers_often_buying.consistent_spacing_on_the_hp\":[\"on\",\"x\",\"c9be1c\"],\"home_living_web.homepage_shop_the_look\":[\"ineligible\",\"e\",\"04fbc0\"],\"home_living_web.homepage_stashvision_shop_the_look_row\":[\"off\",\"x\",\"3195a6\"],\"ranking/high_quality.static_ranking.2019_q2.distracting_content\":[\"on\",\"x\",\"07c8f3\"],\"lingtools/non_en_search.index_mt_fields\":[\"ineligible\",\"e\",\"4818a9\"],\"lingtools/non_en_search.analyzed_attributes\":[\"on\",\"x\",\"37ac5c\"],\"ranking/"
		"high_quality.static_ranking.2019_q2.minimum_match\":[\"off\",\"x\",\"3b724d\"],\"search.use_dark_cluster\":[\"off\",\"x\",\"335bf8\"],\"localization.country_specific_pricing_infra\":[\"on\",\"x\",\"c7a8aa\"],\"search_debug_listing_id\":[\"off\",\"x\",\"031a60\"],\"search_ranking.explain_ranking\":[\"off\",\"x\",\"8e2c22\"],\"ranking/lingtools.llqs_pw_boe\":[\"ineligible\",\"e\",\"a84014\"],\"ranking/lingtools.llqs_pw_web\":[\"ineligible\",\"e\",\"4250e0\"],\"ranking/"
		"search.matching.2024_q1.llqs_boe\":[\"ineligible\",\"e\",\"67f07a\"],\"ranking/search.matching.2024_q1.llqs_web\":[\"ineligible\",\"e\",\"f13686\"],\"ranking/lingtools.localized_listing_quality_score\":[\"boost\",\"x\",\"78ac90\"],\"ranking/lingtools.llqs_boe\":[\"ineligible\",\"e\",\"c060fb\"],\"ranking/lingtools.listing_quality_filter_v1_web\":[\"on\",\"w\",\"0b864d\"],\"ranking/lingtools.listing_quality_filter_v1_boe\":[\"ineligible\",\"e\",\"14a919\"],\"global_idf_type\":[\"idf\",\"x\",\""
		"26d63d\"],\"listing_search_fair_pairs\":[\"on\",\"x\",\"47f217\"],\"ranking/free_and_fair_shipping_boost_95\":[\"on\",\"x\",\"21e2ee\"],\"ranking/ads.sadx.tags_augmentation_search\":[\"off\",\"x\",\"070688\"],\"ranking/ads.sadx.tags_augmentation_l2l\":[\"off\",\"x\",\"676c67\"],\"search.force_x\":[\"off\",\"x\",\"697d9b\"],\"perso_engine.golden_components.purchase_ranker\":[\"off\",\"w\",\"8cebfc\"],\"perso_engine.golden_components.frequency_ranker\":[\"on\",\"w\",\"2ca6a2\"],\""
		"dynamic_experiments.Merch_VDAY24_ShopvsGifts_test\":[\"ineligible\",\"e\",\"7507ce\"],\"dynamic_experiments.Merch_LeftNavSales_test\":[\"ineligible\",\"e\",\"0fc065\"],\"dynamic_experiments.Merch_HolidayvsLastMinute_LeftNav_test\":[\"ineligible\",\"e\",\"7d32ba\"],\"dynamic_experiments.Merch_HolidayHub23_catnav_test\":[\"ineligible\",\"e\",\"bb9704\"],\"dynamic_experiments.Merch_EHDPercentOff_LeftNav_test\":[\"ineligible\",\"e\",\"ef5606\"],\"navx.remove_lowest_categories_from_nav\":[\"ineligible"
		"\",\"e\",\"784432\"],\"registry.show_registry_on_nav\":[\"on\",\"x\",\"f10237\"],\"dynamic_experiments.Merch_DDGvsRTS_test\":[\"ineligible\",\"e\",\"3417f6\"],\"dynamic_experiments.Merch_FreeShipping_test\":[\"ineligible\",\"e\",\"ffb932\"],\"dynamic_experiments.Merch_BrandedBubble_OnSale_2023_test\":[\"ineligible\",\"e\",\"650624\"],\"buyers_often_buying.show_discount_prices_on_the_hp_listings\":[\"on\",\"x\",\"e60c20\"],\"buyers_often_buying.hide_gift_finder\":[\"ineligible\",\"e\",\"bb1761\"],"
		"\"site_chrome/wbi.stitcha.collapse_appshell_global_js\":[\"ineligible\",\"e\",\"19fac3\"],\"qualtrics_survey\":[\"ineligible\",\"e\",\"74dbd2\"],\"qualtrics_survey_non_en\":[\"ineligible\",\"e\",\"5fec45\"],\"collections.privacy_clearer_setting_description\":[\"on\",\"x\",\"412fbc\"],\"web_performance.persistent_experiment_2024_1\":[\"on\",\"w\",\"dc752e\"],\"web_performance.move_device_capabilities_calculation\":[\"off\",\"w\",\"23e74f\"],\"google_tag_manager\":[\"on\",\"x\",\"43dc13\"],\""
		"prodperfect/monthly_data_capture\":[\"off\",\"x\",\"137afb\"],\"one_time_buyers.open_bubble_links_in_new_tab\":[\"off\",\"x\",\"8d14b0\"],\"web_performance.remove_grey_gif\":[\"on\",\"w\",\"c79f8c\"],\"ranking/ad_delivery.ubo_obfuscated_grey_class\":[\"on\",\"x\",\"264198\"],\"ranking/ad_delivery.blank_space_between_ad_text\":[\"on\",\"x\",\"4e7b0b\"],\"eu_cookie_nag\":[\"ineligible\",\"e\",\"f8045f\"],\"ads.prolist.prevent_adblocker\":[\"on\",\"x\",\"fcb82a\"],\"gifting.catnav_mweb_flyout\":[\""
		"ineligible\",\"e\",\"9a58ff\"],\"one_time_buyers.inline_activity_checker_signed_out\":[\"on\",\"x\",\"e3f757\"],\"home_living_web.shop_the_look_v2\":[\"ineligible\",\"e\",\"1998f9\"],\"frontend_systems/stitcha_deduplicate_globals\":[\"on\",\"x\",\"01fc96\"],\"web_performance.default_new_load_css_util\":[\"off\",\"x\",\"286709\"],\"web_performance.context_invalid_mime_type_script\":[\"off\",\"w\",\"6f3bfc\"]},\"user_id\":null,\"page_guid\":\"f881ef167bd.7c12f37f6f8e5c6fcf58.00\",\"version\":1,\""
		"request_uuid\":\"Eu1s6ZyNH5-wNWGDGrLNAL-Vpb43\",\"cdn-provider\":\"fastly\",\"header_fingerprint\":\"ual\",\"header_signature\":\"c9209e7a85db786f4f25c676b0e3ce71\",\"ip_org\":\"Shyam Spectra Pvt\",\"ref\":\"\",\"loc\":\"http://www.etsy.com/\",\"locale_currency_code\":\"INR\",\"pref_language\":\"en-GB\",\"region\":\"IN\",\"detected_currency_code\":\"INR\",\"detected_language\":\"en-GB\",\"detected_region\":\"IN\",\"accept-languages\":\"en-GB,en\",\"isWhiteListedMobileDevice\":false,\""
		"isMobileRequestIgnoreCookie\":false,\"isMobileRequest\":false,\"isMobileDevice\":false,\"isMobileSupported\":false,\"isTabletSupported\":false,\"isTouch\":false,\"isEtsyApp\":false,\"isPreviewRequest\":false,\"isChromeInstantRequest\":false,\"isMozPrefetchRequest\":false,\"isTestAccount\":false,\"isSupportLogin\":false,\"isInternal\":false,\"isInWebView\":false,\"isBot\":false,\"isSyntheticTest\":false,\"ebid\":\"M4zvIy5jWeTlFbi67dR0gQLobhE_hVB0\",\"event_source\":\"web\",\"browser_id\":\""
		"uglmAfXTy3lWTl37jMSr_19FNNlD\",\"gdpr_tp\":3,\"gdpr_p\":3,\"page_time\":242,\"load_strategy\":\"page_navigation\",\"webkit_page_visibility\":\"visible\",\"event_logger\":\"frontend\"}}", 
		LAST);

	web_add_cookie("ua=531227642bc86f3b5fd7103a0c0b4fd6; DOMAIN=www.etsy.com");

	web_concurrent_start(NULL);

	web_url("nav.c59fe0a659e85ef0fe6e.js", 
		"URL=https://www.etsy.com/ac/evergreenVendor/js/en-GB/async/common-entrypoints/auto/bootstrap/category-nav/v2/nav.c59fe0a659e85ef0fe6e.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("deferred.351c4f986dbdc06be08b.js", 
		"URL=https://www.etsy.com/ac/evergreenVendor/js/en-GB/async/common-entrypoints/auto/base-modules/header/deferred.351c4f986dbdc06be08b.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t8.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("catnav", 
		"URL=https://www.etsy.com/api/v3/ajax/bespoke/public/neu/specs/catnav?log_performance_metrics=false&specs%5Bcatnav%5D%5B%5D=CategoryNav_V2_ApiSpec_SubNav&specs%5Bcatnav%5D%5B1%5D%5Bmott_hash%5D=fbd3a8a&specs%5Bcatnav%5D%5B1%5D%5Bshow_sales%5D=false&specs%5Bcatnav%5D%5B1%5D%5Bcatnav_gift_guide%5D=control&specs%5Bcatnav%5D%5B1%5D%5Bgifting_catnav_flyout_desktop_js%5D=false&specs%5Bcatnav%5D%5B1%5D%5Blocale%5D=INR%7Cen-GB%7CIN&specs%5Bcatnav%5D%5B1%5D%5Bpage_type%5D=home", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("tags.js_2", 
		"URL=https://www.etsy.com/include/tags.js", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"Body=jsData=%7B%22log1%22%3Afalse%2C%22opts%22%3A%22endpoint%2CajaxListenerPath%22%2C%22ttst%22%3A1024.0000000004657%2C%22ifov%22%3Afalse%2C%22hc%22%3A4%2C%22br_oh%22%3A680%2C%22br_ow%22%3A1280%2C%22ua%22%3A%22Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F121.0.0.0%20Safari%2F537.36%22%2C%22wbd%22%3Afalse%2C%22tagpu%22%3A4.2285528593131865%2C%22wdif%22%3Afalse%2C%22wdifrm%22%3Afalse%2C%22npmtm%22%3Afalse%2C%22br_h%22%3A593%2C%22br_w%22%3A1280%2C%22nddc%22%3A1%2C%22rs_h%22%3A720%2C%22rs_w%22%3A1280%2C%22rs_cd%22%3A24%2C%22phe%22%3Afalse%2C%22nm%22%3Afalse%2C%22jsf%22%3Afalse%2C%22lg%22%3A%22en-GB%22%2C%22pr%22%3A1%2C%22ars_h%22%3A680%2C%22ars_w%22%3A1280%2C%22tz%22%3A-330%2C%22str_ss%22%3Atrue%2C%22str_ls%22%3Atrue%2C%22str_idb%22%3Atrue"
		"%2C%22str_odb%22%3Afalse%2C%22plgod%22%3Afalse%2C%22plg%22%3A5%2C%22plgne%22%3Atrue%2C%22plgre%22%3Atrue%2C%22plgof%22%3Afalse%2C%22plggt%22%3Afalse%2C%22pltod%22%3Afalse%2C%22hcovdr%22%3Afalse%2C%22hcovdr2%22%3Afalse%2C%22plovdr%22%3Afalse%2C%22plovdr2%22%3Afalse%2C%22ftsovdr%22%3Afalse%2C%22ftsovdr2%22%3Afalse%2C%22lb%22%3Afalse%2C%22eva%22%3A33%2C%22lo%22%3Afalse%2C%22ts_mtp%22%3A0%2C%22ts_tec%22%3Afalse%2C%22ts_tsa%22%3Afalse%2C%22vnd%22%3A%22Google%20Inc.%22%2C%22bid%22%3A%22NA%22%2C%22mmt%22"
		"%3A%22application%2Fpdf%2Ctext%2Fpdf%22%2C%22plu%22%3A%22PDF%20Viewer%2CChrome%20PDF%20Viewer%2CChromium%20PDF%20Viewer%2CMicrosoft%20Edge%20PDF%20Viewer%2CWebKit%20built-in%20PDF%22%2C%22hdn%22%3Afalse%2C%22awe%22%3Afalse%2C%22geb%22%3Afalse%2C%22dat%22%3Afalse%2C%22med%22%3A%22defined%22%2C%22aco%22%3A%22probably%22%2C%22acots%22%3Afalse%2C%22acmp%22%3A%22probably%22%2C%22acmpts%22%3Atrue%2C%22acw%22%3A%22probably%22%2C%22acwts%22%3Afalse%2C%22acma%22%3A%22maybe%22%2C%22acmats%22%3Afalse%2C%22ac"
		"aa%22%3A%22probably%22%2C%22acaats%22%3Atrue%2C%22ac3%22%3A%22%22%2C%22ac3ts%22%3Afalse%2C%22acf%22%3A%22probably%22%2C%22acfts%22%3Afalse%2C%22acmp4%22%3A%22maybe%22%2C%22acmp4ts%22%3Afalse%2C%22acmp3%22%3A%22probably%22%2C%22acmp3ts%22%3Afalse%2C%22acwm%22%3A%22maybe%22%2C%22acwmts%22%3Afalse%2C%22ocpt%22%3Afalse%2C%22vco%22%3A%22%22%2C%22vcots%22%3Afalse%2C%22vch%22%3A%22probably%22%2C%22vchts%22%3Atrue%2C%22vcw%22%3A%22probably%22%2C%22vcwts%22%3Atrue%2C%22vc3%22%3A%22maybe%22%2C%22vc3ts%22%3A"
		"false%2C%22vcmp%22%3A%22%22%2C%22vcmpts%22%3Afalse%2C%22vcq%22%3A%22%22%2C%22vcqts%22%3Afalse%2C%22vc1%22%3A%22probably%22%2C%22vc1ts%22%3Atrue%2C%22dvm%22%3A8%2C%22sqt%22%3Afalse%2C%22so%22%3A%22landscape-primary%22%2C%22wdw%22%3Atrue%2C%22cokys%22%3A%22bG9hZFRpbWVzY3NpYXBwL%3D%22%2C%22ecpc%22%3Afalse%2C%22lgs%22%3Atrue%2C%22lgsod%22%3Afalse%2C%22psn%22%3Atrue%2C%22edp%22%3Atrue%2C%22addt%22%3Atrue%2C%22wsdc%22%3Atrue%2C%22ccsr%22%3Atrue%2C%22nuad%22%3Atrue%2C%22bcda%22%3Afalse%2C%22idn%22%3Atrue"
		"%2C%22capi%22%3Afalse%2C%22svde%22%3Afalse%2C%22vpbq%22%3Atrue%2C%22ucdv%22%3Afalse%2C%22spwn%22%3Afalse%2C%22emt%22%3Afalse%2C%22bfr%22%3Afalse%2C%22dbov%22%3Afalse%2C%22cfpfe%22%3A%22ZnVuY3Rpb24oKXt2YXIgbj10LG89ZG9jdW1lbnRbbigyNjEpXSgnXHg2Mlx4NzJceDZmXHg3N1x4NzNceDY1XHg3Mlx4NjZceDZjXHg2Zlx4NzdceDJkXHg2M1x4NmZceDZlXHg3NFx4NjFceDY5XHg2ZVx4NjVceDcyJyk7aWYobyl7IWZ1bmN0aW9uIHQoKXt2YXIg%22%2C%22stcfp%22%3A%22Y2x1ZGUvdGFncy5qczoyOjc2ODcyKQogICAgYXQgPGNvbXB1dGVkPiBbYXMgZGRfYWFdIChodHRwczovL3d3dy5ldHN5Lm"
		"NvbS9pbmNsdWRlL3RhZ3MuanM6Mjo4OTUxNikKICAgIGF0IGh0dHBzOi8vd3d3LmV0c3kuY29tL2luY2x1ZGUvdGFncy5qczoyOjUyMjM5%22%2C%22ckwa%22%3Atrue%2C%22prm%22%3Atrue%2C%22tzp%22%3A%22Asia%2FCalcutta%22%2C%22cvs%22%3Atrue%2C%22usb%22%3A%22defined%22%2C%22log2%22%3Atrue%2C%22glvd%22%3A%22Google%20Inc.%20(Google)%22%2C%22glrd%22%3A%22ANGLE%20(Google%2C%20Vulkan%201.3.0%20(SwiftShader%20Device%20(Subzero)%20(0x0000C0DE))%2C%20SwiftShader%20driver)%22%2C%22jset%22%3A1707731045%7D&eventCounters=%5B%5D&jsType=ch&cid="
		"urbyKuBCBvkUES65WtVJ~BKtRrHEjwL04rqqT28P1K7UnAUzgU1O5vFhKUFCrsY0yZqz0BkJjzyRF2o4RiZo36GYnbTFtXPBE~eWJA4pa2egyScrENEkCoO4uLdhlt2A&ddk=D013AA612AB2224D03B2318D0F5B19&Referer=https%253A%252F%252Fwww.etsy.com%252F&request=%252F&responsePage=origin&ddv=4.21.1", 
		LAST);

	web_custom_request("listings-map-ajax", 
		"URL=https://www.etsy.com/api/v3/ajax/public/guest/favorites/listings-map-ajax", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("beacon_2", 
		"URL=https://www.etsy.com/bcn/beacon", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"event_name\":\"above_the_fold\",\"modules\":[\"Homepage_Vesta_ApiSpec_ContentfulSearchBubbles\",\"Etsy_Modules_HomePage_ShopByCategory_ApiSpec\"],\"below_fold_modules\":[\"home_popular_right_now\",\"Homepage_Vesta_ApiSpec_GiftsBySearch\",\"Etsy_Modules_HomePage_LocalShops_ApiSpec\",\"impact_message\"],\"atf_placeholders\":[],\"page_type\":\"home\",\"has_activity\":false,\"first_content_module\":\"Homepage_Vesta_ApiSpec_ContentfulSearchBubbles\",\"guid\":\""
		"f881ef167bd.7c12f37f6f8e5c6fcf58.01\",\"attempted_send_beacon\":true},{\"event_name\":\"lc_video_present\",\"module\":\"recs_prn\",\"num_videos\":4,\"guid\":\"f881ef167bd.7c12f37f6f8e5c6fcf58.02\",\"attempted_send_beacon\":true},{\"event_name\":\"Homepage_Vesta_ApiSpec_ContentfulSearchBubbles_seen\",\"guid\":\"f881ef167bd.7c12f37f6f8e5c6fcf58.03\",\"attempted_send_beacon\":true}],\"shared\":{\"ab\":{\"xplat.runtime_config_service.ramp\":[\"on\",\"x\",\"b4354c\"],\"orm_latency\":[\"off\",\"x\",\""
		"091448\"],\"home_living_web.device_atlas_3_upgrade\":[\"off\",\"x\",\"146ab4\"],\"international.languages.pl\":[\"on\",\"x\",\"bb315a\"],\"scraper_protection.datadome.jan_2024_comparison\":[\"on\",\"m\",\"a072c9\"],\"neu_configurablerouter_homepage\":[\"on\",\"w\",\"ac29a5\"],\"design_systems.ehi_phase_3_v2\":[\"on\",\"w\",\"e1b3e6\"],\"site_chrome/buyer_to_seller_navbar_signed_out\":[\"ineligible\",\"e\",\"0efe99\"],\"web_performance.fix_image_domain_resource_hints\":[\"off\",\"x\",\"4fde70\"],\""
		"dynamic_experiments.Merch_GiftMode24_Teaser_test\":[\"ineligible\",\"e\",\"3ad555\"],\"checkout.gift_card_cta_in_search_dropdown\":[\"on\",\"x\",\"931866\"],\"persistent_experiment.q1_2024\":[\"on\",\"w\",\"dc2661\"],\"ranking/search.experience.xml_autosuggest_desktop_v3\":[\"ineligible\",\"e\",\"5f637e\"],\"ranking/search.experience.xml_autosuggest_mweb_v3\":[\"ineligible\",\"e\",\"6f8d5d\"],\"ranking/search.experience.xml_autosuggest_desktop\":[\"ineligible\",\"e\",\"c1e93d\"],\"ranking/"
		"search.experience.xml_autosuggest_mweb\":[\"ineligible\",\"e\",\"3139a6\"],\"lingtools/trending_searches.gcp\":[\"ineligible\",\"e\",\"5cfa03\"],\"site_chrome/buyer_to_seller_navbar_signed_in\":[\"ineligible\",\"e\",\"67649b\"],\"site_chrome/buyer_zipcode_in_header_desktop\":[\"off\",\"x\",\"eb55bf\"],\"site_chrome/buyer_zipcode_in_header_mweb\":[\"ineligible\",\"e\",\"5d612c\"],\"ranking/search.experience.search_bar_a11y\":[\"on\",\"x\",\"6c887f\"],\"stitcha.handle_all_js\":[\"off\",\"x\",\""
		"2b84e3\"],\"builda_scss\":[\"sasquatch\",\"x\",\"96bd82\"],\"polyfills\":[\"on\",\"x\",\"db574b\"],\"polyfill_experiment_4\":[\"no_filtering\",\"x\",\"0e8409\"],\"navx.fnb_in_india\":[\"off\",\"x\",\"f41a09\"],\"navx.sw_visual_subnav\":[\"off\",\"x\",\"7a80c1\"],\"navx.sw_l2_ill\":[\"off\",\"x\",\"a755cc\"],\"navx.acm_sw_india\":[\"on\",\"x\",\"c46bd9\"],\"navx.dark_overlay_v2\":[\"on\",\"x\",\"878964\"],\"navx.sw_l2_cards\":[\"on\",\"w\",\"9722a8\"],\"navx.acm_to_market\":[\"off\",\"x\",\"4d91e1"
		"\"],\"navx.simplify_parent_nodes\":[\"ineligible\",\"e\",\"5ea89e\"],\"gifting.gnav_desktop_flyout\":[\"ineligible\",\"e\",\"55be9d\"],\"granify\":[\"ineligible\",\"e\",\"b5f12d\"],\"onsite_promos.contentful_promos\":[\"off\",\"x\",\"9b91c6\"],\"onsite_promos.superbowl\":[\"ineligible\",\"e\",\"0addba\"],\"core-localisation.sales_and_deals_banners.deals_of_the_day\":[\"on\",\"x\",\"facf93\"],\"buyers_often_buying.remove_popular_right_now\":[\"off\",\"x\",\"84f976\"],\""
		"buyers_often_buying.consistent_spacing_on_the_hp\":[\"on\",\"x\",\"c9be1c\"],\"home_living_web.homepage_shop_the_look\":[\"ineligible\",\"e\",\"04fbc0\"],\"home_living_web.homepage_stashvision_shop_the_look_row\":[\"off\",\"x\",\"3195a6\"],\"ranking/high_quality.static_ranking.2019_q2.distracting_content\":[\"on\",\"x\",\"07c8f3\"],\"lingtools/non_en_search.index_mt_fields\":[\"ineligible\",\"e\",\"4818a9\"],\"lingtools/non_en_search.analyzed_attributes\":[\"on\",\"x\",\"37ac5c\"],\"ranking/"
		"high_quality.static_ranking.2019_q2.minimum_match\":[\"off\",\"x\",\"3b724d\"],\"search.use_dark_cluster\":[\"off\",\"x\",\"335bf8\"],\"localization.country_specific_pricing_infra\":[\"on\",\"x\",\"c7a8aa\"],\"search_debug_listing_id\":[\"off\",\"x\",\"031a60\"],\"search_ranking.explain_ranking\":[\"off\",\"x\",\"8e2c22\"],\"ranking/lingtools.llqs_pw_boe\":[\"ineligible\",\"e\",\"a84014\"],\"ranking/lingtools.llqs_pw_web\":[\"ineligible\",\"e\",\"4250e0\"],\"ranking/"
		"search.matching.2024_q1.llqs_boe\":[\"ineligible\",\"e\",\"67f07a\"],\"ranking/search.matching.2024_q1.llqs_web\":[\"ineligible\",\"e\",\"f13686\"],\"ranking/lingtools.localized_listing_quality_score\":[\"boost\",\"x\",\"78ac90\"],\"ranking/lingtools.llqs_boe\":[\"ineligible\",\"e\",\"c060fb\"],\"ranking/lingtools.listing_quality_filter_v1_web\":[\"on\",\"w\",\"0b864d\"],\"ranking/lingtools.listing_quality_filter_v1_boe\":[\"ineligible\",\"e\",\"14a919\"],\"global_idf_type\":[\"idf\",\"x\",\""
		"26d63d\"],\"listing_search_fair_pairs\":[\"on\",\"x\",\"47f217\"],\"ranking/free_and_fair_shipping_boost_95\":[\"on\",\"x\",\"21e2ee\"],\"ranking/ads.sadx.tags_augmentation_search\":[\"off\",\"x\",\"070688\"],\"ranking/ads.sadx.tags_augmentation_l2l\":[\"off\",\"x\",\"676c67\"],\"search.force_x\":[\"off\",\"x\",\"697d9b\"],\"perso_engine.golden_components.purchase_ranker\":[\"off\",\"w\",\"8cebfc\"],\"perso_engine.golden_components.frequency_ranker\":[\"on\",\"w\",\"2ca6a2\"],\""
		"dynamic_experiments.Merch_VDAY24_ShopvsGifts_test\":[\"ineligible\",\"e\",\"7507ce\"],\"dynamic_experiments.Merch_LeftNavSales_test\":[\"ineligible\",\"e\",\"0fc065\"],\"dynamic_experiments.Merch_HolidayvsLastMinute_LeftNav_test\":[\"ineligible\",\"e\",\"7d32ba\"],\"dynamic_experiments.Merch_HolidayHub23_catnav_test\":[\"ineligible\",\"e\",\"bb9704\"],\"dynamic_experiments.Merch_EHDPercentOff_LeftNav_test\":[\"ineligible\",\"e\",\"ef5606\"],\"navx.remove_lowest_categories_from_nav\":[\"ineligible"
		"\",\"e\",\"784432\"],\"registry.show_registry_on_nav\":[\"on\",\"x\",\"f10237\"],\"dynamic_experiments.Merch_DDGvsRTS_test\":[\"ineligible\",\"e\",\"3417f6\"],\"dynamic_experiments.Merch_FreeShipping_test\":[\"ineligible\",\"e\",\"ffb932\"],\"dynamic_experiments.Merch_BrandedBubble_OnSale_2023_test\":[\"ineligible\",\"e\",\"650624\"],\"buyers_often_buying.show_discount_prices_on_the_hp_listings\":[\"on\",\"x\",\"e60c20\"],\"buyers_often_buying.hide_gift_finder\":[\"ineligible\",\"e\",\"bb1761\"],"
		"\"site_chrome/wbi.stitcha.collapse_appshell_global_js\":[\"ineligible\",\"e\",\"19fac3\"],\"qualtrics_survey\":[\"ineligible\",\"e\",\"74dbd2\"],\"qualtrics_survey_non_en\":[\"ineligible\",\"e\",\"5fec45\"],\"collections.privacy_clearer_setting_description\":[\"on\",\"x\",\"412fbc\"],\"web_performance.persistent_experiment_2024_1\":[\"on\",\"w\",\"dc752e\"],\"web_performance.move_device_capabilities_calculation\":[\"off\",\"w\",\"23e74f\"],\"google_tag_manager\":[\"on\",\"x\",\"43dc13\"],\""
		"prodperfect/monthly_data_capture\":[\"off\",\"x\",\"137afb\"],\"one_time_buyers.open_bubble_links_in_new_tab\":[\"off\",\"x\",\"8d14b0\"],\"web_performance.remove_grey_gif\":[\"on\",\"w\",\"c79f8c\"],\"ranking/ad_delivery.ubo_obfuscated_grey_class\":[\"on\",\"x\",\"264198\"],\"ranking/ad_delivery.blank_space_between_ad_text\":[\"on\",\"x\",\"4e7b0b\"],\"eu_cookie_nag\":[\"ineligible\",\"e\",\"f8045f\"],\"ads.prolist.prevent_adblocker\":[\"on\",\"x\",\"fcb82a\"],\"gifting.catnav_mweb_flyout\":[\""
		"ineligible\",\"e\",\"9a58ff\"],\"one_time_buyers.inline_activity_checker_signed_out\":[\"on\",\"x\",\"e3f757\"],\"home_living_web.shop_the_look_v2\":[\"ineligible\",\"e\",\"1998f9\"],\"frontend_systems/stitcha_deduplicate_globals\":[\"on\",\"x\",\"01fc96\"],\"web_performance.default_new_load_css_util\":[\"off\",\"x\",\"286709\"],\"web_performance.context_invalid_mime_type_script\":[\"off\",\"w\",\"6f3bfc\"]},\"user_id\":null,\"page_guid\":\"f881ef167bd.7c12f37f6f8e5c6fcf58.00\",\"version\":1,\""
		"request_uuid\":\"Eu1s6ZyNH5-wNWGDGrLNAL-Vpb43\",\"cdn-provider\":\"fastly\",\"header_fingerprint\":\"ual\",\"header_signature\":\"c9209e7a85db786f4f25c676b0e3ce71\",\"ip_org\":\"Shyam Spectra Pvt\",\"ref\":\"\",\"loc\":\"http://www.etsy.com/\",\"locale_currency_code\":\"INR\",\"pref_language\":\"en-GB\",\"region\":\"IN\",\"detected_currency_code\":\"INR\",\"detected_language\":\"en-GB\",\"detected_region\":\"IN\",\"accept-languages\":\"en-GB,en\",\"isWhiteListedMobileDevice\":false,\""
		"isMobileRequestIgnoreCookie\":false,\"isMobileRequest\":false,\"isMobileDevice\":false,\"isMobileSupported\":false,\"isTabletSupported\":false,\"isTouch\":false,\"isEtsyApp\":false,\"isPreviewRequest\":false,\"isChromeInstantRequest\":false,\"isMozPrefetchRequest\":false,\"isTestAccount\":false,\"isSupportLogin\":false,\"isInternal\":false,\"isInWebView\":false,\"isBot\":false,\"isSyntheticTest\":false,\"ebid\":\"M4zvIy5jWeTlFbi67dR0gQLobhE_hVB0\",\"event_source\":\"web\",\"browser_id\":\""
		"uglmAfXTy3lWTl37jMSr_19FNNlD\",\"gdpr_tp\":3,\"gdpr_p\":3,\"page_time\":242,\"load_strategy\":\"page_navigation\",\"webkit_page_visibility\":\"visible\",\"event_logger\":\"frontend\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_concurrent_start(NULL);

	web_url("Menu.e3aeae1e7246df03778e.js", 
		"URL=https://www.etsy.com/ac/evergreenVendor/js/en-GB/async/common-entrypoints/auto/@etsy-modules/CategoryNav/Views/DropdownMenu/CardsDropdown/Menu.e3aeae1e7246df03778e.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("category_handler.bab6e8b57656b8c8725f.js", 
		"URL=https://www.etsy.com/ac/evergreenVendor/js/en-GB/async/common-entrypoints/auto/category-nav/v2/category_handler.bab6e8b57656b8c8725f.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESGQkKnK3FVGs2RRIFDUHqUa4hr5rRhYhMVJYSGQkOfWrEYygQ0xIFDZEESIIhr5rRhYhMVJY=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESGQkKnK3FVGs2RRIFDUHqUa4hr5rRhYhMVJYSGQkOfWrEYygQ0xIFDZEESIIhr5rRhYhMVJY=?alt=proto", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_cookie("datadome=~cwyAkNTZjn9GoZCNA7IeXogGs5Rx7uEkqusgxpZt_vuwQWdi2dcD4MNzw6LxtIZkfi4ckt8VB9_MsHSkpSSyFg~CfsflVqcGxcAHWJTg7jTNVIYz8y5KXzVDXoq1KKN; DOMAIN=www.etsy.com");

	web_url("submenu", 
		"URL=https://www.etsy.com/api/v3/ajax/bespoke/public/neu/specs/submenu?log_performance_metrics=false&specs%5Bsubmenu%5D%5B%5D=Etsy%5CModules%5CCategoryNav%5CSpecs%5CDropdownSubmenu&specs%5Bsubmenu%5D%5B1%5D%5Bimages_in_l2%5D=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("favicon.ico", 
		"URL=https://www.etsy.com/favicon.ico", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/vnd.microsoft.icon", 
		"Referer=https://www.etsy.com/", 
		"Snapshot=t17.inf", 
		LAST);

	
	return 0;
}
