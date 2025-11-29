@interface IESECBuyNowUtils : NSObject

+ (id)appVersionCode;
+ (id)getStoreForKey:(id)a0;
+ (long long)appBtype;
+ (double)getContentScale;
+ (id)appVersionName;
+ (double)getBottomOffset;
+ (double)getNavBarHeight;
+ (int)appVersionNumber;
+ (id)getStatusCodeWithError:(id)a0 response:(id)a1;
+ (id)getStatusMsgWithError:(id)a0 response:(id)a1;
+ (int)appIDNumber;
+ (id)findParentScrollView:(id)a0;
+ (void)scrollChildView:(id)a0 ToHorizontalCenter:(id)a1;
+ (id)MergeMapsWithBaseMaps:(id)a0 appendMaps:(id)a1;
+ (BOOL)isInHuoshan;
+ (BOOL)isInAweme;
+ (BOOL)isInAwemeLite;
+ (id)appID;
+ (BOOL)isAccessibilityEnabled;
+ (id)appInfo;
+ (id)getDeviceID;
+ (id)appInfos;

@end
