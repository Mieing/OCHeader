@interface DiscoverEntranceSettingsCellHandler_Ting : DiscoverEntranceSettingAbstractCellHandler

- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)settingEntranceSwitchType;
- (unsigned long long)reddotCtrlFlagMask;
- (void)sendEntranceValueToServer:(BOOL)a0;
- (void)commitEntranceValue:(BOOL)a0;

@end
