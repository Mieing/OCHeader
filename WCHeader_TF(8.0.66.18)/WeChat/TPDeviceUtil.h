@interface TPDeviceUtil : NSObject

+ (float)osVersionFloat;
+ (id)osVersionString;
+ (float)sysVersion;
+ (id)sysVersionString;
+ (BOOL)isPadInterface;
+ (BOOL)isPadModel;
+ (BOOL)isPhoneModel;
+ (long long)deviceType;
+ (id)iPhoneDeviceMap;
+ (id)iPadDeviceMap;
+ (BOOL)supportMetal;
+ (BOOL)isSystemVersionLessThan:(id)a0;
+ (BOOL)isSystemVersionLessAndEqual:(id)a0;
+ (BOOL)isSystemVersionGreaterThan:(id)a0;
+ (BOOL)isSystemVersionGreaterAndEqual:(id)a0;
+ (id)splitIntStringWithDot:(id)a0;
+ (int)compareIntAndDotVersion:(id)a0 version2:(id)a1 compareLevel:(long long)a2;
+ (struct CGSize { double x0; double x1; })deviceResolution;
+ (id)deviceResolutionString;
+ (id)deviceMachine;

@end
