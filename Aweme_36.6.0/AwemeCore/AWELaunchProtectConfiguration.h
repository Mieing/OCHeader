@class NSString;

@interface AWELaunchProtectConfiguration : NSObject <IESLaunchProtectConfigurationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportEvent:(unsigned long long)a0 params:(id)a1;
- (BOOL)_overrideForceEnable:(BOOL *)a0;
- (void)_overrideAppendDeepCleanConfigDocumentsPassList:(id)a0;
- (void)safemodeDidFinishLaunching;
- (void)protectFirstTry;
- (id)deepCleanConfig;
- (id)safemodeUIConfig;
- (void)onDidFinishLaunching;
- (BOOL)isEnabled;

@end
