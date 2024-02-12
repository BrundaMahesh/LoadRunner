Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("1P_JAR=2024-02-05-10; DOMAIN=apis.google.com");

	web_add_cookie("AEC=Ae3NU9Oj9hlsFY0VVEmr0qpyhdayQ6Fa5ipSKD02181LjFIVUaBngcsomw; DOMAIN=apis.google.com");

	web_add_cookie("NID=511=ctPKVOvvZaofbWr_yc3df98xfSPFSXn3sE7790YKDlHkwxLLybpzM11XfII8HZGCci9kdJF4l4ZakA7Pk56GO43TbFTf2DICYRDqtoSbdYN6cvyunhrJuaE5lS1CiPdjQAEWC3msFG20qCAy2u3heLnAsIkrWcjOIm0JaWayO4xkwoJEQ5r2vki6; DOMAIN=apis.google.com");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.gstatic.com/og/_/ss/k=og.qtm.8RUPaHb7e5o.L.W.O/m=qcwid/excm=qaaw,qadd,qaid,qein,qhaw,qhba,qhbr,qhch,qhga,qhid,qhin/d=1/ed=1/ct=zgms/rs=AA2YrTungzasoekTaLKrPFUaQFpakqDmnA", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://www.gstatic.com/og/_/js/k=og.qtm.en_US.ZEEp2pdSHOQ.2019.O/rt=j/m=qabr,q_d,qcwid,qapid,qald,q_dg/exm=qaaw,qadd,qaid,qein,qhaw,qhba,qhbr,qhch,qhga,qhid,qhin/d=1/ed=1/rs=AA2YrTvRRKYp7I5vTn-AtFvme6Qlo6hq9Q", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQn11VQ7sgCk8RIFDWlIR0chrbMLunyG1js=?alt=proto", "Referer=", ENDITEM, 
		"Url=https://apis.google.com/_/scs/abc-static/_/js/k=gapi.gapi.en.GsbA68hXs80.O/m=gapi_iframes,googleapis_client/rt=j/sv=1/d=1/ed=1/rs=AHpOoo899t-H8Lxb3OqzMDuPn6TV_i36ag/cb=gapi.loaded_0", "Referer=https://www.google.com/", ENDITEM, 
		LAST);

	web_add_cookie("1P_JAR=2024-02-05-10; DOMAIN=play.google.com");

	web_add_cookie("AEC=Ae3NU9Oj9hlsFY0VVEmr0qpyhdayQ6Fa5ipSKD02181LjFIVUaBngcsomw; DOMAIN=play.google.com");

	web_add_cookie("NID=511=ctPKVOvvZaofbWr_yc3df98xfSPFSXn3sE7790YKDlHkwxLLybpzM11XfII8HZGCci9kdJF4l4ZakA7Pk56GO43TbFTf2DICYRDqtoSbdYN6cvyunhrJuaE5lS1CiPdjQAEWC3msFG20qCAy2u3heLnAsIkrWcjOIm0JaWayO4xkwoJEQ5r2vki6; DOMAIN=play.google.com");

	web_custom_request("log", 
		"URL=https://play.google.com/log?format=json&hasfast=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.google.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=[[1,null,null,null,null,null,null,null,null,null,[null,null,null,null,\"en-IN\",null,null,null,[[[\"Not A(Brand\",\"99\"],[\"Google Chrome\",\"121\"],[\"Chromium\",\"121\"]],0,\"Windows\",\"10.0.0\",\"x86\",\"\",\"121.0.6167.140\"],[1,0,0,0,0]]],373,[[\"1707126640827\",null,null,null,null,null,null,\"[108,40400,538,1,\\\"602241693.0\\\",\\\"6rHAZYaNJ6C3g8UP4suCuA4\\\",null,null,null,\\\"en\\\",\\\"IND\\\",0,8,3860,null,0,0,null,\\\"og-9d0e7350-5bbe-4742-98b4-5eddd45ba5a0\\\",null,null,null,"
		"null,null,null,null,0,null,null,null,19037050,null,null,null,null,0,[1],1,null,null,null,null,null,null,null,null,null,null,null,[0,2],null,null,null,null,0,null,[2,5,\\\"sl\\\",17],null,null,0,0,1]\",null,null,null,null,null,null,-19800,[null,null,null,\"[]\"],null,null,null,null,1],[\"1707126640830\",null,null,null,null,null,null,\"[107,40400,538,1,\\\"602241693.0\\\",\\\"6rHAZYaNJ6C3g8UP4suCuA4\\\",null,null,null,\\\"en\\\",\\\"IND\\\",0,8,3863,null,0,0,null,\\\""
		"og-9d0e7350-5bbe-4742-98b4-5eddd45ba5a0\\\",null,null,null,null,null,null,null,8,null,null,null,19037050,null,null,null,null,0,[2],2,null,null,null,null,null,null,null,null,null,null,null,[0,2],null,null,null,null,0,null,[2,5,\\\"sl\\\",17],null,null,0,0,1]\",null,null,null,null,null,null,-19800,[null,null,null,\"[]\"],null,null,null,null,2]],\"1707126641839\",null,null,null,null,null,null,null,null,null,null,null,null,null,[[null,[null,null,null,null,null,null,null,null,null,null,null,null,"
		"122505695]],9]]", 
		EXTRARES, 
		"Url=https://lh5.googleusercontent.com/p/AF1QipORjSliv1rRditQBc53zc97FH9h9Gm-56kJvMQH=w92-h92-n-k-no", "Referer=https://www.google.com/", ENDITEM, 
		LAST);

	web_add_cookie("1P_JAR=2024-02-05-10; DOMAIN=id.google.com");

	web_add_cookie("AEC=Ae3NU9Oj9hlsFY0VVEmr0qpyhdayQ6Fa5ipSKD02181LjFIVUaBngcsomw; DOMAIN=id.google.com");

	lr_think_time(14);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:F0VxzrjBQIkv0V8JgOme-Th8GQpsqCX95-jJPBlr7iQ&cup2hreq=d2c68dcbbdbd7a2a333c2ee6a021dd98547c1c6957807c189a52a8252de831c5", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{e88ba763-f95e-4ad1-83a8-b5152f894979}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{f67cc13f-79f9-4a4a-9eb2-fa84eb2775d4}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\""
		":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{6739b56a-0f26-4efb-a9a2-4ce9c44453a2}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\""
		"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{085066e7-5b9b-43fc-bf2a-cbdd62c528bc}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\""
		"{970192cc-f488-408e-8273-48d8fdb173d0}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6151,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{899b522b-7e90-44b4-be33-491296a2aebf}\",\"rd\":6243},\"updatecheck\":{},\"version\":\""
		"2024.1.2.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{dcf368a2-9d85-4e74-840b-e257b97000f8}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl"
		":\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{39bfcf4e-2d33-4176-b05f-63ce7d5caeba}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"432\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\""
		"ping_freshness\":\"{f32e341d-939b-425f-9400-741ede285c12}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{a966ad3c-cf66-4e52-be0e-29e40afb5bb0}\",\"rd\":6243},\""
		"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b639cc0f057b0d472ba8827f557f9a745e640af0a4ccf5d3a7c77e944343ae6e\"}]},\"ping\":{\"ping_freshness\":\"{de8efd48-ea66-417a-b2db-103b6d59f719}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"8528\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.887c873b6c3a26844482754c8534268fcd848b8c543b652626b4d4ec367f26fd\"}]},\"ping\":{\"ping_freshness\":\"{fd4bcb04-8b54-4360-87f7-85b091a1bc7f}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"3017\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\""
		":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{2a788c9b-4d98-4768-ad1c-6e4c69e21eea}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{d8c601a5-6577-4c24-833b-ad8ea5478b41}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":"
		"{\"ping_freshness\":\"{8a39656d-bb5b-41ef-ba64-c683f79b8039}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{a76efb40-fb60-4b7d-bf91-90d98d5c15ca}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\""
		"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{fca2311a-0f4b-4a8e-bbed-b9a267d21c0f}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\""
		"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6151,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.1ef9f0df4172bd73d0dd61c5b9f31c13df8522d4581a638a37be32dad0d920c4\"}]},\"ping\":{\"ping_freshness\":\"{62e08ad3-6303-4975-86ee-74944b948de3}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"2024.2.3.1\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\""
		"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{4f4220b5-3816-47d0-8a5b-bfe52f5c93fe}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c67f56e4-e44a-4e3b-9eb0-54de92b13a3f}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\""
		"ping_freshness\":\"{b313509c-c6be-408e-b3be-e55f25be1fab}\",\"rd\":6243},\"updatecheck\":{},\"version\":\"2024.1.17.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6151,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.738f6ed18eb59593934e529fa42f819ee99067eb187a687a24c2a940bae078d3\"}]},\"ping\":{\"ping_freshness\":\"{8e878db0-76ab-4675-9ec6-9de96fd6fc7e}\",\"rd\":6243},\""
		"updatecheck\":{},\"version\":\"2024.1.31.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{f7e0c96b-8cd5-434a-a0b2-0afc5150b8bd}\",\"sessionid\":\""
		"{b3c29d84-f31e-44eb-a92f-88e5a2cabada}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.140\"}}", 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/googlesans/v14/4UaGrENHsxJlGDuGo1OIlL3Owp4.woff2", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://id.google.com/verify/ANsg4T4lnOi-6nXscXGnuaQtocPuO8qZ9jflHIKzxdLP6eoze6yAtilztKroopclCu3zI6hfwi3ZjhoAspgHEiOC7gqLZFuJdpeWY0-c8A8rUNbsBjSSJA", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn3.gstatic.com/images?q=tbn:ANd9GcQfckeP2jtbHJlXra0Abnq7Kbf0eQ6iVg8Snltj4_Sdb0EFjwHyP8A", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn3.gstatic.com/images?q=tbn:ANd9GcQyOqARvJ5ODGOAg4NOKD7nGQ_wFDazMrH30KQi3QE81jLS9PpHnI4AGhhAXLN5XTN3pts", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn3.gstatic.com/images?q=tbn:ANd9GcRtTAzc2YkpjeeHuAZMrdHXdjLC08MmdAY8f-kcSqO9yjz_IHpIsYE2-ICyu9vsgxXPXxo", "Referer=https://www.google.com/", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_url("LoadRunner", 
		"URL=https://en.wikipedia.org/wiki/LoadRunner", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes:find?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIxLjAuNjE2Ny4xNDASGwoNCAUQBhgBIgMwMDEwARCKkxUaAhgL_32f8RIbCg0IARAGGAEiAzAwMTABENzoDRoCGAuWyKP_EhsKDQgDEAYYASIDMDAxMAEQk-ANGgIYC1Pwu-ESGwoNCA4QBhgBIgMwMDEwARCfrwcaAhgLXNT5rxIaCg0IARAIGAEiAzAwMTAEENo3GgIYC2JJje8SGwoNCA8QBhgBIgMwMDEwARCbqwIaAhgLN-LuphIZCg0IChAIGAEiAzAwMTABEAcaAhgLYjna-BIZCg0ICRAGGAEiAzAwMTABECMaAhgLl55IyxIaCg0ICBAGGAEiAzAwMTABELAVGgIYC16hDoESGwoNCA0QBhgBIgMwMDEwARDvjAIaAhgLErj60xIbCg0IBxAGGAEiAzAwMTABEJOvDhoCGAvIJv1_EhoKDQgQEAYYASIDMDAxMAEQhyEaAhgLU96qHRooCA"
		"EIAwgFCAYIBwgICAkICggNCA4IDwgQEAEQCBoGCgSQ4gVIIAEgBA==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=../w/load.php?modules=skins.vector.icons&image=menu&format=original&lang=en&skin=vector-2022&version=1ywk8", "Referer=https://en.wikipedia.org/w/load.php?lang=en&modules=codex-search-styles%7Cext.cite.styles%7Cext.uls.interlanguage%7Cext.visualEditor.desktopArticleTarget.noscript%7Cext.wikimediaBadges%7Cjquery.makeCollapsible.styles%7Cskins.vector.icons%2Cstyles%7Cwikibase.client.init&only=styles&skin=vector-2022", ENDITEM, 
		"Url=../w/load.php?modules=skins.vector.icons&image=ellipsis&format=original&lang=en&skin=vector-2022&version=1ywk8", "Referer=https://en.wikipedia.org/w/load.php?lang=en&modules=codex-search-styles%7Cext.cite.styles%7Cext.uls.interlanguage%7Cext.visualEditor.desktopArticleTarget.noscript%7Cext.wikimediaBadges%7Cjquery.makeCollapsible.styles%7Cskins.vector.icons%2Cstyles%7Cwikibase.client.init&only=styles&skin=vector-2022", ENDITEM, 
		"Url=../w/skins/Vector/resources/skins.vector.styles/images/arrow-down.svg?f88ee", "Referer=https://en.wikipedia.org/w/load.php?lang=en&modules=codex-search-styles%7Cext.cite.styles%7Cext.uls.interlanguage%7Cext.visualEditor.desktopArticleTarget.noscript%7Cext.wikimediaBadges%7Cjquery.makeCollapsible.styles%7Cskins.vector.icons%2Cstyles%7Cwikibase.client.init&only=styles&skin=vector-2022", ENDITEM, 
		"Url=../w/load.php?modules=skins.vector.icons&image=language&variant=progressive&format=original&lang=en&skin=vector-2022&version=1ywk8", "Referer=https://en.wikipedia.org/w/load.php?lang=en&modules=codex-search-styles%7Cext.cite.styles%7Cext.uls.interlanguage%7Cext.visualEditor.desktopArticleTarget.noscript%7Cext.wikimediaBadges%7Cjquery.makeCollapsible.styles%7Cskins.vector.icons%2Cstyles%7Cwikibase.client.init&only=styles&skin=vector-2022", ENDITEM, 
		"Url=../w/skins/Vector/resources/skins.vector.styles/images/arrow-down-progressive.svg?5cd6d", "Referer=https://en.wikipedia.org/w/load.php?lang=en&modules=codex-search-styles%7Cext.cite.styles%7Cext.uls.interlanguage%7Cext.visualEditor.desktopArticleTarget.noscript%7Cext.wikimediaBadges%7Cjquery.makeCollapsible.styles%7Cskins.vector.icons%2Cstyles%7Cwikibase.client.init&only=styles&skin=vector-2022", ENDITEM, 
		"Url=../w/skins/Vector/resources/skins.vector.styles/images/bullet-icon.svg?d4515", "Referer=https://en.wikipedia.org/w/load.php?lang=en&modules=codex-search-styles%7Cext.cite.styles%7Cext.uls.interlanguage%7Cext.visualEditor.desktopArticleTarget.noscript%7Cext.wikimediaBadges%7Cjquery.makeCollapsible.styles%7Cskins.vector.icons%2Cstyles%7Cwikibase.client.init&only=styles&skin=vector-2022", ENDITEM, 
		"Url=../w/skins/Vector/resources/skins.vector.styles/images/link-external-small-ltr-progressive.svg?fb64d", "Referer=https://en.wikipedia.org/w/load.php?lang=en&modules=codex-search-styles%7Cext.cite.styles%7Cext.uls.interlanguage%7Cext.visualEditor.desktopArticleTarget.noscript%7Cext.wikimediaBadges%7Cjquery.makeCollapsible.styles%7Cskins.vector.icons%2Cstyles%7Cwikibase.client.init&only=styles&skin=vector-2022", ENDITEM, 
		"Url=../w/load.php?lang=en&modules=ext.gadget.ReferenceTooltips%2Cswitcher&skin=vector-2022&version=12yvc", ENDITEM, 
		"Url=../w/load.php?lang=en&modules=ext.visualEditor.core.utils.parsing%7Cext.visualEditor.desktopArticleTarget.init%7Cext.visualEditor.progressBarWidget%2CsupportCheck%2CtargetLoader%2CtempWikitextEditorWidget%2Ctrack%2Cve&skin=vector-2022&version=awdhe", ENDITEM, 
		"Url=../w/load.php?lang=en&modules="
		"ext.centralNotice.choiceData%2Cdisplay%2CgeoIP%2CimpressionDiet%2CkvStore%2CstartUp%7Cext.centralauth.ForeignApi%2Ccentralautologin%7Cext.checkUser.clientHints%7Cext.cite.ux-enhancements%7Cext.cx.eventlogging.campaigns%7Cext.cx.model%7Cext.cx.uls.quick.actions%7Cext.echo.centralauth%7Cext.eventLogging%2CnavigationTiming%2Cpopups%2CwikimediaEvents%7Cext.growthExperiments.SuggestedEditSession%7Cext.uls.common%2Cinterface%2Cpreferences%2Cwebfonts%7Cext.urlShortener.toolbar%7Cjquery%2Coojs%2Csite%7Cjq"
		"uery.client%2CmakeCollapsible%2CtextSelection%7Cjquery.uls.data%7Cmediawiki.ForeignApi%2CString%2CTitle%2CUri%2Capi%2Cbase%2Ccldr%2Ccookie%2Cexperiments%2CjqueryMsg%2Clanguage%2Crouter%2Cstorage%2Ctoc%2CtoggleAllCollapsibles%2Cuser%2Cutil%2CvisibleTimeout%7Cmediawiki.ForeignApi.core%7Cmediawiki.editfont.styles%7Cmediawiki.libs.pluralruleparser%7Cmediawiki.page.ready%7Cmediawiki.page.watch.ajax%7Cmmv.bootstrap%2Chead%7Cmmv.bootstrap.autostart%7Cmw.cx.SiteMapper%7Coojs-ui.styles.icons-interactions%7"
		"Cskins.vector.clientPreferences%2Cjs%7Cskins.vector.icons.js%7Cwikibase.client.vector-2022&skin=vector-2022&version=t788w", ENDITEM, 
		LAST);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":12241,\"downloaded\":2130,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"8529\",\"previousversion\":\"8528\",\"total\":2130,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"hfnkpimlhhgieaddgfemjhofmfblmnib/1.bda4d85c5aed0b1f9273f8a7bd2a922e52bc884d684ff820edc096cdf1656eb4/1.b639cc0f057b0d472ba8827f557f9a745e640af0a4ccf5d3a7c77e944343ae6e/593c8ae791c2cd96580e06e311700e9a15ac70646ca31c848273d96d622568ba.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.bda4d85c5aed0b1f9273f8a7bd2a922e52bc884d684ff820edc096cdf1656eb4\",\"nextversion\":\"8529\",\"previousfp\":\"1.b639cc0f057b0d472ba8827f557f9a745e640af0a4ccf5d3a7c77e944343ae6e\",\""
		"previousversion\":\"8528\"}],\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.bda4d85c5aed0b1f9273f8a7bd2a922e52bc884d684ff820edc096cdf1656eb4\"}]},\"version\":\"8529\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{42c4cd33-9ab2-4c15-8637-780058ef0472}\",\"sessionid\":\"{b3c29d84-f31e-44eb-a92f-88e5a2cabada}\",\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	return 0;
}