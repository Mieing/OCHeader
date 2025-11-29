@interface BDScreenCastUntil : NSObject

+ (id)mergeTrackParams:(id)a0 ToScheme:(id)a1;
+ (unsigned long long)intPercentCalculate:(unsigned long long)a0 duration:(unsigned long long)a1;
+ (id)transformProgressToTimeString:(double)a0 duration:(double)a1;
+ (BOOL)isDeviceEnableHotspot;
+ (id)localMediaUrlString;
+ (id)rootNavigationViewController;
+ (id)deviceProtocolNameForDevice:(id)a0;
+ (id)supportProtocolNameForDevice:(id)a0;
+ (id)valueInDict:(id)a0 path:(id)a1;
+ (id)getDeviceStrategyWithDeviceName:(id)a0;
+ (id)fontDescriptorWithFontName:(id)a0;
+ (long long)compareVersion1:(id)a0 withVersion2:(id)a1;
+ (id)timeStringWithSeconds:(long long)a0;
+ (id)getWebCommonParamsKey;
+ (id)getLeboLogExtraParamsKey;
+ (id)findTheSameDevicefrom:(id)a0 deviceList:(id)a1;
+ (BOOL)checkDeviceNameIsXsg:(id)a0;
+ (BOOL)inBlackDeviceListWith:(id)a0;
+ (id)mergeLeboExtraParamsToURL:(id)a0 context:(id)a1;
+ (BOOL)isIPV4WithString:(id)a0;
+ (BOOL)isAirPlayMirrorDevice:(id)a0;
+ (id)networkTypeString;

@end
