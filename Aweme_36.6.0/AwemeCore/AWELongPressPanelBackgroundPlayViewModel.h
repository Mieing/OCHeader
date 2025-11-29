@class NSString, AWELongPressPanelBGPlayRightView;

@interface AWELongPressPanelBackgroundPlayViewModel : AWELongPressPanelBaseViewModel <AWEBGPlayUserSettingsChangedMessage>

@property (retain, nonatomic) AWELongPressPanelBGPlayRightView *bgPlayRightContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)longPressPanelViewModel;
+ (unsigned long long)backgroundPlayAudioOptConfig;

- (void)onSwitchChanged:(BOOL)a0;
- (BOOL)supportPinchSwitch;
- (void)backgroundPlayDidChangeAudioSwitchToState:(long long)a0;
- (BOOL)shouldShowBGPlayUniSwitch;
- (id)panelBizVMIdentifier;
- (void)configViewModelWhenSupportPinchSwitch;
- (id)commonLogParams;
- (id)trackCustomParamsShow;
- (id)trackCustomParamsClick;
- (BOOL)needShow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
