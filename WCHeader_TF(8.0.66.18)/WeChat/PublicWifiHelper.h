@interface PublicWifiHelper : MMObject

+ (id)genSessionKey;
+ (id)stringForNow;
+ (int)getSvrTypeFromWifiScene:(unsigned int)a0;
+ (void)logCloseGuidePageOfProtoOneWithAPMac:(id)a0;
+ (void)logCloseGuidePageOfProtoFourWithAPMac:(id)a0;
+ (void)logClickCompleteButtonOfCompletePageWithAPMac:(id)a0 followBrand:(int)a1 protoType:(int)a2;
+ (BOOL)isWifiConnected;
+ (BOOL)isNeedSpecialHandling;

@end
