@class NSString;

@interface AWEFeedPauseModalModuleService : HTSService <AWEFeedPauseModalModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)feedPauseModalManagerClass;
- (Class)feedPauseModalBaseConfigClass;
- (Class)feedPauseModalUtilClass;
- (id)bizTypeIdentifierWithBizType:(unsigned long long)a0;
- (unsigned long long)settingsBizType;
- (BOOL)isSettingsPageSwitchOn;
- (void)updateSettingsSwitchStatus:(BOOL)a0;
- (id)settingsSnackBarTitle;
- (id)settingsIconName;
- (id)settingsEntranceTitle;
- (id)settingsSecondPageImageURLString;
- (id)settingsSecondPageTitle;
- (id)settingsSecondPageSwitchTitle;

@end
