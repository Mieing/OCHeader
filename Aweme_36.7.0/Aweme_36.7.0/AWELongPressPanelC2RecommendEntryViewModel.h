@class DUXSwitch;

@interface AWELongPressPanelC2RecommendEntryViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) DUXSwitch *mySwitch;

+ (id)longPressPanelViewModel;

- (void)onSwitchChanged:(BOOL)a0;
- (id)panelBizVMIdentifier;
- (id)commonTrackParamsWithBizVM:(id)a0;
- (void)trackSquareInterectedSettingClick:(BOOL)a0;
- (BOOL)needShow;
- (void).cxx_destruct;
- (id)init;

@end
