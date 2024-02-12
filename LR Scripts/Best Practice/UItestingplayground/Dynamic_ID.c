Dynamic_ID()
{
	/* Dynamic ID click */

	lr_think_time(10);

	web_url("dynamicid", 
		"URL=http://uitestingplayground.com/dynamicid", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	return 0;
}
