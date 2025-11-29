@class NSString;

@interface AWESettingsModuleService : HTSService <AWESettingsModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchSettings;
- (void)fetchSettingsWithHeader:(id)a0;
- (void)delayFetchSettings;
- (void)delayFetchSettingsWithHeader:(id)a0;
- (void)registerBusinessSettingsClass:(Class)a0;
- (BOOL)combineSettingsRequest;
- (id)aweClientABTestManager;
- (void)registerClientABTest:(id)a0;
- (void)addAPIRequestModifier:(id)a0;
- (id)settingsManager;

@end
