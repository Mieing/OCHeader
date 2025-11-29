@interface DiscoverEntranceSettingCellHandler_Finder : DiscoverEntranceSettingAbstractCellHandler

- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)serviceAuthType;
- (unsigned long long)settingEntranceSwitchType;
- (void)onSheetDisppearWithSwitchChanged:(id)a0;
- (BOOL)isWeixinServiceForOversea;
- (void)onEntranceSwitchChanged:(id)a0;

@end
