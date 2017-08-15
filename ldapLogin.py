import requests,time,subprocess
url='http://stgw.iitmandi.ac.in/ug/authenticate.php';
url2='http://gateway.iitmandi.ac.in/facstaff/authenticate.php';
logout='http://stgw.iitmandi.ac.in/ug/logout.php';
logout2='http://gateway.iitmandi.ac.in/facstaff/logout.php';
values={'username':'b17041','password':'Dheeraj@10168'};
if str('IITMandi_WiFi') in str(subprocess.check_output("netsh wlan show interfaces")):
 while True:
    print("I am on iit's wifi");
    requests.post(logout,data=None);
    r=requests.post(url,data=values);
    requests.post(logout2,data=None);
    r1=requests.post(url2,data=values);
    print(url," ",r);
    if(r==''):
        print("yes");
    print(url2," ",r1);
    time.sleep(300);# repeat process every 5 minutes
