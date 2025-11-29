@interface BUNetInfoHelper : NSObject

+ (BOOL)isValidateIP:(id)a0;
+ (BOOL)isValidateIPV6:(id)a0;
+ (id)bu_getIPv4Address:(id)a0;
+ (id)bu_userAgentString;
+ (id)bu_getIPAddresses;
+ (long long)GetNetWorkTypeCode;
+ (id)GetNetWorkType;
+ (id)bu_getIPAddress:(BOOL)a0;
+ (id)bu_getIPv6Address:(id)a0;
+ (id)bu_getWiFiBSSID;
+ (id)carrierName;

@end
