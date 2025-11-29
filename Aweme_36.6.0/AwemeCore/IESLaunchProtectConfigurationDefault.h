@class NSString;

@interface IESLaunchProtectConfigurationDefault : NSObject <IESLaunchProtectConfigurationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportEvent:(unsigned long long)a0 params:(id)a1;
- (void)safemodeDidFinishLaunching;
- (void)protectFirstTry;
- (id)deepCleanConfig;
- (BOOL)isEnabled;

@end
