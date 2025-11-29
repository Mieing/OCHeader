@interface BDPDeviceHelper : NSObject

+ (id)resolutionString;
+ (BOOL)isPadDevice;
+ (float)OSVersionNumber;
+ (double)ssOnePixel;
+ (BOOL)isIPhoneXSeriesDevice;
+ (BOOL)isIPhoneXSeriesDevice_HG;
+ (BOOL)hasDynamicIsland;
+ (BOOL)isDynamicIslandSeries;
+ (BOOL)isLarge320;
+ (BOOL)isPadProDevice;
+ (unsigned long long)getDeviceType;
+ (double)screenScale;
+ (id)platform;
+ (id)getDeviceName;
+ (id)currentLanguage;

@end
