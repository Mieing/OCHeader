@class NSString;

@interface DiscoverEntranceSettingCellHandler_Search : DiscoverEntranceSettingAbstractCellHandler <MMWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)serviceAuthType;
- (BOOL)isWeixinServiceForOversea;
- (unsigned long long)settingEntranceSwitchType;
- (void)onEntranceSwitchChanged:(id)a0;

@end
