@interface TPIOSSystemInfo : NSObject

+ (float)sysVersion;
+ (id)sysVersionString;
+ (BOOL)isPadInterface;
+ (BOOL)isPadModel;
+ (BOOL)isPhoneModel;
+ (BOOL)supportMetal;
+ (BOOL)IsSupportMetal;
+ (BOOL)supportDolbyDigital;
+ (BOOL)supportHDRVivid;
+ (BOOL)supportDolbyVision;
+ (BOOL)supportHDR10;
+ (BOOL)supportDolbyDigitalPlus;
+ (int)supportHardDecHevclevel;
+ (int)supportSoftDecHevcLevel;
+ (int)supportHardDecH264Level;
+ (BOOL)isSupportFHD60FPSDevice;
+ (int)supportSoftDecH264Level;
+ (int)supportSoftDecVp9Level;
+ (int)supportSoftDecAv1Level;
+ (int)supportSoftDecVvcLevel;
+ (BOOL)isSystemVersionLessThan:(id)a0;
+ (BOOL)isSystemVersionLessAndEqual:(id)a0;
+ (BOOL)isSystemVersionGreaterThan:(id)a0;
+ (BOOL)isSystemVersionGreaterAndEqual:(id)a0;
+ (long long)getElapsedRealtimeSinceBootUs;
+ (long long)getElapsedRealtimeSinceBootUsUsingClockGettime;
+ (long long)getElapsedRealtimeSinceBootUsUsingSysctl;
+ (BOOL)isDeviceModelVersionGreaterAndEqual:(id)a0;

@end
