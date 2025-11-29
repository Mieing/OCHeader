@interface GULNetworkInfo : NSObject

+ (long long)getNetworkType;
+ (id)getNetworkInfo;
+ (id)getNetworkMobileCountryCode;
+ (id)getNetworkMobileNetworkCode;
+ (id)formatMcc:(id)a0 andMNC:(id)a1;
+ (id)getNetworkRadioType;

@end
