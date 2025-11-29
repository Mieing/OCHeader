@interface WXGNetworkUtility : NSObject

+ (BOOL)isBatteryChargeAndLevel:(float *)a0;
+ (BOOL)isHotspotActivity;
+ (BOOL)isSameWifi:(id)a0 selfWifiName:(id *)a1;
+ (int)isSameNetGateWay:(id)a0;
+ (id)_getCorrectMaskWithIP:(id)a0;
+ (BOOL)isOpenHotSpot;
+ (BOOL)isOnWifiOrHostSpotMode;
+ (id)currentHotSpotOrWifiSSID;
+ (int)isInnerIP:(id)a0;
+ (id)getLocalIPString;

@end
