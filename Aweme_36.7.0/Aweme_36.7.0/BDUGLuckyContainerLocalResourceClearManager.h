@interface BDUGLuckyContainerLocalResourceClearManager : NSObject

+ (void)initializeResourceClearProbe;
+ (id)sharedInstance;

- (void)setupInitialization;
- (void)settingsDidUpdateAction;
- (id)__removeDataFromSettings;
- (void)__removeLocalDatasWithRemoveData:(id)a0;
- (void)__triggerClearLocalStorageWithKey:(id)a0 localVersionKey:(id)a1 removeVersion:(id)a2;

@end
