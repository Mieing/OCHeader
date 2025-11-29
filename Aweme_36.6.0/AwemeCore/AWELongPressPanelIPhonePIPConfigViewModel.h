@class NSString, AWELongPressPanelBGPlayRightView;

@interface AWELongPressPanelIPhonePIPConfigViewModel : AWELongPressPanelBaseViewModel <AWEBGPlayUserSettingsChangedMessage>

@property (retain, nonatomic) AWELongPressPanelBGPlayRightView *bgPlayRightContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)longPressPanelViewModel;

- (BOOL)iPhoneGlobalPiPSwitchDefaultState;
- (void)updateIPhoneGlobalPiPSwitch:(BOOL)a0;
- (void)switchDidChange:(id)a0;
- (BOOL)supportPinchSwitch;
- (void)backgroundPlayDidChangePiPSwitchToState:(long long)a0;
- (BOOL)shouldShowBGPlayUniSwitch;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (void)configViewModelWhenSupportPinchSwitch;
- (id)trackCustomParamsShow;
- (id)trackCustomParamsClick;
- (BOOL)needShow;
- (void).cxx_destruct;
- (void)dealloc;

@end
