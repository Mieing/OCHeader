@interface AWECloudCommandNetDiagnoseAddressInfo : NSObject

+ (id)_formatIPV4Address:(struct in_addr { unsigned int x0; })a0;
+ (id)_formatIPV6Address:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0;
+ (id)_getGatewayIPV4Address;
+ (id)_getGatewayIPV6Address;
+ (id)_getIPV4DNSWithHostName:(id)a0;
+ (id)_getIPV6DNSWithHostName:(id)a0;
+ (id)deviceIPAdress;
+ (id)getGatewayIPAddress;
+ (id)getDNSsWithDormain:(id)a0;
+ (id)outPutDNSServers;

@end
