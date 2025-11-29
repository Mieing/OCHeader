@class NSString;

@interface AWECKResourceManager : NSObject <CKResourceLoggerDelegate, CKResourceMonitorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupEnvForGenericTemplateCKResourceIfNeeded;
+ (void)configCKResource;
+ (id)commonResourceCacheDir;
+ (void)configAB;
+ (void)configDavinciResource;
+ (BOOL)isAppStoreChannel;
+ (id)sharedManager;

@end
