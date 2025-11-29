@interface GULAppEnvironmentUtil : NSObject

+ (BOOL)isFromAppStore;
+ (BOOL)isAppStoreReceiptSandbox;
+ (id)getSysctlEntry:(const char *)a0;
+ (id)applePlatform;
+ (id)deviceSimulatorModel;
+ (BOOL)isIOS7OrHigher;
+ (BOOL)hasSwiftRuntime;
+ (id)appleDevicePlatform;
+ (BOOL)isAppExtension;
+ (BOOL)isSimulator;
+ (id)deviceModel;
+ (id)systemVersion;
+ (id)deploymentType;

@end
