@interface WXVoIPSystemUtil : NSObject

+ (id)getSystemVersion;
+ (BOOL)isVersionGreaterThan:(id)a0;
+ (BOOL)isVersionLessThan:(id)a0;
+ (BOOL)isVersionNoGreaterThan:(id)a0;
+ (BOOL)isVersionNoLessThan:(id)a0;
+ (float)getAppMemoryUsage;
+ (id)deviceModelVersion;
+ (BOOL)isLowPerformanceDevice;

@end
