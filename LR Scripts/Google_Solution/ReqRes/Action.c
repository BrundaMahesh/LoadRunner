Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("reqres.in", 
		"URL=https://reqres.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("swagger-logo-horizontal.jpeg", 
		"URL=https://reqres.in/img/swagger-logo-horizontal.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://reqres.in/", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("app.css", 
		"URL=https://reqres.in/css/app.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://reqres.in/", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("logo.png", 
		"URL=https://reqres.in/img/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://reqres.in/", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("monetization.custom.js", 
		"URL=https://m.servedby-buysellads.com/monetization.custom.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("email-decode.min.js", 
		"URL=https://reqres.in/cdn-cgi/scripts/5c5dd728/cloudflare-static/email-decode.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("classic-10_7.css", 
		"URL=https://cdn-images.mailchimp.com/embedcode/classic-10_7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://reqres.in/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("app.js", 
		"URL=https://reqres.in/js/app.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("DigiCertSHA2ExtendedValidationServerCA.crt", 
		"URL=http://cacerts.digicert.com/DigiCertSHA2ExtendedValidationServerCA.crt", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("v3", 
		"URL=https://js.stripe.com/v3/", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("carbon.js", 
		"URL=https://cdn.carbonads.com/carbon.js?serve=CE7D6K3E&placement=reqresin", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("users", 
		"URL=https://reqres.in/api/users?page=2", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_url("m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"URL=https://js.stripe.com/v3/m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://reqres.in/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("analytics.js", 
		"URL=https://www.google-analytics.com/analytics.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("m-outer-15a2b40a058ddff1cffdb63779fe3de1.js", 
		"URL=https://js.stripe.com/v3/fingerprinted/js/m-outer-15a2b40a058ddff1cffdb63779fe3de1.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://js.stripe.com/v3/m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("CEBIP53J.json", 
		"URL=https://srv.buysellads.com/ads/CEBIP53J.json?segment=placement:reqresin-sponsor", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQnMIvvTQPBsKxIFDR7T91Ehl7BwzbjlnNsSIAmgY6Hpmu8n4hIFDSbzfSsSBQ1uyQ-wIbv56xk1YSbg", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQnMIvvTQPBsKxIFDR7T91Ehl7BwzbjlnNsSIAmgY6Hpmu8n4hIFDSbzfSsSBQ1uyQ-wIbv56xk1YSbg?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("CEBIP53J.json_2", 
		"URL=https://srv.buysellads.com/ads/CEBIP53J.json?segment=placement:reqresin-sponsor", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");


	web_set_sockets_option("TLS_SNI", "1");

	web_url("css", 
		"URL=https://fonts.googleapis.com/css?family=Roboto:300,400,500,700|Source%20Code%20Pro:500", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t20.inf", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=1875364148&t=pageview&_s=1&dl=https%3A%2F%2Freqres.in%2F&ul=en-gb&de=UTF-8&dt=Reqres%20-%20A%20hosted%20REST-API%20ready%20to%20respond%20to%20your%20AJAX%20requests&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=IEBAAEABAAAAACAAI~&jid=722758317&gjid=767896786&cid=1676242383.1707214142&tid=UA-55888877-1&_gid=381025571.1707214142&_r=1&_slc=1&z=1862803512", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://reqres.in/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_concurrent_start(NULL);

	web_url("out-4.5.43.js", 
		"URL=https://m.stripe.network/out-4.5.43.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://m.stripe.network/inner.html", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("v84a3a4012de94ce1a686ba8c167c359c1696973893317", 
		"URL=https://static.cloudflareinsights.com/beacon.min.js/v84a3a4012de94ce1a686ba8c167c359c1696973893317", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("868803", 
		"URL=https://avatars.githubusercontent.com/u/868803?v=4", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("npm.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/npm.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("css.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/css.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("21.png", 
		"URL=https://screenshots.codesandbox.io/j17lt/21.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("typescript.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/typescript.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t28.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("2.2.1.json", 
		"URL=https://prod-packager-packages.codesandbox.io/v2/packages/node-libs-browser/2.2.1.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("17.0.0.json", 
		"URL=https://prod-packager-packages.codesandbox.io/v2/packages/react/17.0.0.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("17.0.0.json_2", 
		"URL=https://prod-packager-packages.codesandbox.io/v2/packages/react-dom/17.0.0.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6", 
		"URL=https://m.stripe.com/6", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://m.stripe.network/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"JTdCJTIydjIlMjIlM0ExJTJDJTIyaWQlMjIlM0ElMjJiMDFlNDcyZTMwNWMxZGU5YTliYjFhZjg0MDg5ZGQ4ZCUyMiUyQyUyMnQlMjIlM0E1OTAuMyUyQyUyMnRhZyUyMiUzQSUyMjQuNS40MyUyMiUyQyUyMnNyYyUyMiUzQSUyMmpzJTIyJTJDJTIyYSUyMiUzQSU3QiUyMmElMjIlM0ElN0IlMjJ2JTIyJTNBJTIyZmFsc2UlMjIlMkMlMjJ0JTIyJTNBMC4zJTdEJTJDJTIyYiUyMiUzQSU3QiUyMnYlMjIlM0ElMjJmYWxzZSUyMiUyQyUyMnQlMjIlM0EwJTdEJTJDJTIyYyUyMiUzQSU3QiUyMnYlMjIlM0ElMjJlbi1HQiUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJkJTIyJTNBJTdCJTIydiUyMiUzQSUyMldpbjMyJTIyJTJDJTIydCUyMiUzQTAlN0QlMkMlMjJlJT"
		"IyJTNBJTdCJTIydiUyMiUzQSUyMlBERiUyMFZpZXdlciUyQ2ludGVybmFsLXBkZi12aWV3ZXIlMkNhcHBsaWNhdGlvbiUyRnBkZiUyQ3BkZiUyQiUyQnRleHQlMkZwZGYlMkNwZGYlMkMlMjBDaHJvbWUlMjBQREYlMjBWaWV3ZXIlMkNpbnRlcm5hbC1wZGYtdmlld2VyJTJDYXBwbGljYXRpb24lMkZwZGYlMkNwZGYlMkIlMkJ0ZXh0JTJGcGRmJTJDcGRmJTJDJTIwQ2hyb21pdW0lMjBQREYlMjBWaWV3ZXIlMkNpbnRlcm5hbC1wZGYtdmlld2VyJTJDYXBwbGljYXRpb24lMkZwZGYlMkNwZGYlMkIlMkJ0ZXh0JTJGcGRmJTJDcGRmJTJDJTIwTWljcm9zb2Z0JTIwRWRnZSUyMFBERiUyMFZpZXdlciUyQ2ludGVybmFsLXBkZi12aWV3ZXIlMkNhcHBsaWNhdGlvbiUyRnBk"
		"ZiUyQ3BkZiUyQiUyQnRleHQlMkZwZGYlMkNwZGYlMkMlMjBXZWJLaXQlMjBidWlsdC1pbiUyMFBERiUyQ2ludGVybmFsLXBkZi12aWV3ZXIlMkNhcHBsaWNhdGlvbiUyRnBkZiUyQ3BkZiUyQiUyQnRleHQlMkZwZGYlMkNwZGYlMjIlMkMlMjJ0JTIyJTNBMC44JTdEJTJDJTIyZiUyMiUzQSU3QiUyMnYlMjIlM0ElMjIxMjgwd182ODBoXzI0ZF8xciUyMiUyQyUyMnQlMjIlM0EwJTdEJTJDJTIyZyUyMiUzQSU3QiUyMnYlMjIlM0ElMjI1LjUlMjIlMkMlMjJ0JTIyJTNBMC4yJTdEJTJDJTIyaCUyMiUzQSU3QiUyMnYlMjIlM0ElMjJmYWxzZSUyMiUyQyUyMnQlMjIlM0EwJTdEJTJDJTIyaSUyMiUzQSU3QiUyMnYlMjIlM0ElMjJzZXNzaW9uU3RvcmFnZS1lbmFibGVkJT"
		"JDJTIwbG9jYWxTdG9yYWdlLWVuYWJsZWQlMjIlMkMlMjJ0JTIyJTNBNC4zJTdEJTJDJTIyaiUyMiUzQSU3QiUyMnYlMjIlM0ElMjIwMTAwMTAwMTAwMDExMDAwMTAxMDAwMTAxMTAwMDEwMTAxMDEwMDEwMDEwMTExMTEwMTExMTExJTIyJTJDJTIydCUyMiUzQTU4NC4zJTJDJTIyYXQlMjIlM0E0NzEuMiU3RCUyQyUyMmslMjIlM0ElN0IlMjJ2JTIyJTNBJTIyJTIyJTJDJTIydCUyMiUzQTAlN0QlMkMlMjJsJTIyJTNBJTdCJTIydiUyMiUzQSUyMk1vemlsbGElMkY1LjAlMjAoV2luZG93cyUyME5UJTIwMTAuMCUzQiUyMFdpbjY0JTNCJTIweDY0KSUyMEFwcGxlV2ViS2l0JTJGNTM3LjM2JTIwKEtIVE1MJTJDJTIwbGlrZSUyMEdlY2tvKSUyMENocm9tZSUyRjEyMS4w"
		"LjAuMCUyMFNhZmFyaSUyRjUzNy4zNiUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJtJTIyJTNBJTdCJTIydiUyMiUzQSUyMiUyMiUyQyUyMnQlMjIlM0EwJTdEJTJDJTIybiUyMiUzQSU3QiUyMnYlMjIlM0ElMjJmYWxzZSUyMiUyQyUyMnQlMjIlM0ExNTkuNCUyQyUyMmF0JTIyJTNBMC41JTdEJTJDJTIybyUyMiUzQSU3QiUyMnYlMjIlM0ElMjJhY2I3ZDVmMDlkZjU0ZTMzMzFjZDI0NzU3ZTEzMTVjNCUyMiUyQyUyMnQlMjIlM0E5Ni4xJTdEJTdEJTJDJTIyYiUyMiUzQSU3QiUyMmElMjIlM0ElMjIlMjIlMkMlMjJiJTIyJTNBJTIyaHR0cHMlM0ElMkYlMkZzS1JBS1pSUDh4NDFMbDA0RU9fR1RfUE5FSkR3Wmt6Rnd6YmExbGZ6LVlzLmpaWHBzczhORm8zQU5IZ0"
		"ZMQTRlN2dqMVJ4Y3NkSGd1c2d2RjQzSmZaWDglMkYlMjIlMkMlMjJjJTIyJTNBJTIyJTIyJTJDJTIyZCUyMiUzQSUyMk5BJTIyJTJDJTIyZSUyMiUzQSUyMk5BJTIyJTJDJTIyZiUyMiUzQWZhbHNlJTJDJTIyZyUyMiUzQXRydWUlMkMlMjJoJTIyJTNBdHJ1ZSUyQyUyMmklMjIlM0ElNUIlMjJsb2NhdGlvbiUyMiU1RCUyQyUyMmolMjIlM0ElNUIlNUQlMkMlMjJuJTIyJTNBNDg1LjE5OTk5OTk5NTUyOTY1JTJDJTIydSUyMiUzQSUyMnJlcXJlcy5pbiUyMiUyQyUyMnclMjIlM0ElMjIxNzA3MjE0MTQyNzQ3JTNBODI3YWExNzkwOGVlZTJiYTNiM2JiYzJhY2ZlMjI5NmI3NGZhYTAzYWJiMWE0Njc3NTQ1Yzk1Y2Q0ZTNlNmIwMyUyMiU3RCUyQyUyMmglMjIlM0ElMjI4"
		"NzU2MGZiNTA5YWQ4ZjFjNDEwNSUyMiU3RA==", 
		LAST);

	web_url("runtime", 
		"URL=https://data.jsdelivr.com/v1/package/npm/@babel/runtime", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("0.9.0.json", 
		"URL=https://prod-packager-packages.codesandbox.io/v2/packages/react-refresh/0.9.0.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("core", 
		"URL=https://data.jsdelivr.com/v1/package/npm/@babel/core", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6_2", 
		"URL=https://m.stripe.com/6", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://m.stripe.network/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=JTdCJTIybXVpZCUyMiUzQSUyMmRiYWNjYTUyLTgxMzAtNGJhOS05NzUwLWVkZDNiMDkxN2ViNjQ0MzEwMCUyMiUyQyUyMnNpZCUyMiUzQSUyMjU3ZGQ5MWEzLTYzNDEtNGI5NC04Njk0LTc3NTczMTZiNzc0NmQ4NGZkZiUyMiUyQyUyMnVybCUyMiUzQSUyMmh0dHBzJTNBJTJGJTJGc0tSQUtaUlA4eDQxTGwwNEVPX0dUX1BORUpEd1prekZ3emJhMWxmei1Zcy5qWlhwc3M4TkZvM0FOSGdGTEE0ZTdnajFSeGNzZEhndXNndkY0M0pmWlg4JTJGJTIyJTJDJTIyc291cmNlJTIyJTNBJTIybW91c2UtdGltaW5ncy0xMCUyMiUyQyUyMmRhdGElMjIlM0ElNUI0NzglMkMzMSUyQzMyJTJDMzIlMkMzNCUyQzI4JTJDMzElMkMzMSUyQzMxJTJDMzElNUQlN0Q=", 
		LAST);

	web_url("flat", 
		"URL=https://data.jsdelivr.com/v1/package/npm/react@17.0.0/flat", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("flat_2", 
		"URL=https://data.jsdelivr.com/v1/package/npm/@babel/runtime@7.23.9/flat", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("tsconfig.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/tsconfig.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("package.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/package.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("jsconfig.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/jsconfig.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("prettierrc.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/prettierrc.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t42.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	
	web_add_cookie("_ga=GA1.2.1676242383.1707214142; DOMAIN=reqres.in");

	web_add_cookie("_gid=GA1.2.381025571.1707214142; DOMAIN=reqres.in");

	web_add_cookie("_gat=1; DOMAIN=reqres.in");

	web_add_cookie("__stripe_mid=dbacca52-8130-4ba9-9750-edd3b0917eb6443100; DOMAIN=reqres.in");

	web_add_cookie("__stripe_sid=57dd91a3-6341-4b94-8694-7757316b7746d84fdf; DOMAIN=reqres.in");

	lr_think_time(19);

	web_custom_request("2", 
		"URL=https://reqres.in/api/users/2", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(30);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:5eHpcmAEbUIQGfLnKjUXdOEXcu6_2LdRFZwQ11yAr7U&cup2hreq=6030b40f8cb910aa04c7bc0bd54747484cd0d890bb55fb2865084fc224eebce8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{1ec92d96-1791-4054-9219-1cc0e5f99ac5}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{05915861-4299-4d2a-8685-5df3c09e0455}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\""
		":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{2ab567f0-4e2e-4241-b848-cb63822c57bd}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\""
		"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{bbff612d-cff1-482b-a535-3706524c803f}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{1c3117ba-50e2-4c62-8911-fc16c855d012}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"432\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\""
		"ping_freshness\":\"{a94e1376-3122-471b-bec0-941fd9f993da}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{9c901ba3-e755-47cb-8929-799c60c726a4}\",\"rd\":6245},\"updatecheck\":{},\""
		"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{116284fc-99b8-4f01-bc9b-deb8a1a42528}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":"
		"\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{d86e9a6f-51ea-41c1-b02b-f1a6695ac6b0}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness"
		"\":\"{f56701f8-41e3-400e-b0fd-31064d6aafa6}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{4158b239-e8e4-4a0f-8b64-bd99a7dd1640}\",\"rd\":6245},\"updatecheck\":{},\""
		"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{757c6641-8a68-4a33-8d94-45657ba92383}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.887c873b6c3a26844482754c8534268fcd848b8c543b652626b4d4ec367f26fd\"}]},\"ping\":{\"ping_freshness\":\"{a9ec3e2b-128c-4847-a011-615e3560c70c}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"3017\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{527f4e04-5546-4cfc-a170-2a9053f8ff08}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6151,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{666e06f7-39ec-499a-9b57-d755e05e8ca3}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\""
		"ping_freshness\":\"{0841d740-be23-443d-926f-d93757675d65}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{4aea1227-3cfc-4bd8-a592-108c20c60ae7}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\""
		"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6151,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.74316953175dd4fc990c661551ce1387c462d705f9eff88d759fb130885a3530\"}]},\"ping\":{\"ping_freshness\":\"{0a121c29-0d0e-447d-9eb7-9936bf16944d}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.2.4.1\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB"
		"\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{d2007878-712e-4338-bdfc-bf10e79c805a}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{64a6bf9b-311c-4730-b276-4efddd50ab62}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\""
		"ping_freshness\":\"{15f75d04-f70a-4a93-bfb3-0adda3323c74}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.1.17.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6151,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\"ping\":{\"ping_freshness\":\"{e43f7d8b-4184-40d1-ac0f-0768bfed2b75}\",\"rd\":6245},\""
		"updatecheck\":{},\"version\":\"2024.2.5.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{0b9eb26a-dea2-467f-90ee-befa602dc1a0}\",\"sessionid\":\""
		"{9e22b5ab-9834-4fc5-bb04-91d7c7813c27}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	/* Clicking POST Create */

	lr_think_time(15);

	web_custom_request("users_2", 
		"URL=https://reqres.in/api/users", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"morpheus\",\"job\":\"leader\"}", 
		LAST);

	web_url("threatListUpdates:fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIxLjAuNjE2Ny4xNDAaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARCwlRUaAhgLoPuN2yIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQvukNGgIYC9wyJkMiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEPbgDRoCGAtljyvCIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARC2rwcaAhgLYb6OcyIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ3DcaAhgLwLZjkiIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQ_qsCGgIYC8ob7XYiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgLYjna-CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAuXnkjLIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARCxFRoCGAv0T3H1IgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCKjQIaAhgLbUYmqiIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ9a8OGgIYCz2mMh4iBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEIshGgIYC7kwzGAiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t47.inf", 
		LAST);

	/* Clicking PUT Update */

	lr_think_time(33);

	web_custom_request("2_2", 
		"URL=https://reqres.in/api/users/2", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"Body={\"name\":\"morpheus\",\"job\":\"zion resident\"}", 
		LAST);

	/* Clicking DELETE */

	lr_think_time(27);

	web_custom_request("2_3", 
		"URL=https://reqres.in/api/users/2", 
		"Method=DELETE", 
		"Resource=0", 
		"Referer=https://reqres.in/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}