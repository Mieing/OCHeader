@interface DiscoverEntranceSettingCellHandler_AppBrand : DiscoverEntranceSettingAbstractCellHandler

- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)settingEntranceSwitchType;
- (unsigned long long)serviceAuthType;
- (BOOL)isWeixinServiceForOversea;
- (void)onEntranceSwitchChanged:(id)a0;
- (void)onSheetDisppearWithSwitchChanged:(id)a0;

@end
