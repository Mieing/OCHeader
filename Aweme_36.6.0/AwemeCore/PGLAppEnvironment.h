@interface PGLAppEnvironment : NSObject

+ (BOOL)isJailBroken;
+ (id)getBundleId;
+ (BOOL)hasJailBroken;
+ (BOOL)isFromAppStore;
+ (BOOL)isFromTestFlight;
+ (id)checkEnv:(id)a0;
+ (BOOL)isAppStoreReceiptSandbox;
+ (BOOL)hasEmbeddedMobileProvision;
+ (id)fetchAppEnvironment;
+ (void)updateAppEnvironment;
+ (id)checkEvilFiles:(id)a0 suffix:(id)a1;
+ (id)getDeviceName;

@end
