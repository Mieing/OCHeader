@interface AWELongPressPanelBGPlaySettingsViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (BOOL)supportPinchSwitch;
- (BOOL)shouldShowBGPlayUniSwitch;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (BOOL)needShow;

@end
