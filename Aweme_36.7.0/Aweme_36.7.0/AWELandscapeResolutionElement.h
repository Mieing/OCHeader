@class UIButton, AWELandscapeResolutionSettingsView, NSString;
@protocol AWEVideoPlayerStallInfoCalculatorProtocol;

@interface AWELandscapeResolutionElement : AWELandscapeInteractionBaseElement <AWELandscapeResolutionSettingsViewDelegate, AWELandscapeResolutionElementProtocol>

@property (retain, nonatomic) UIButton *resolutionButton;
@property (retain, nonatomic) AWELandscapeResolutionSettingsView *settingsView;
@property (nonatomic) BOOL isShowingSettingsView;
@property (retain, nonatomic) id<AWEVideoPlayerStallInfoCalculatorProtocol> stallInfoCalculator;
@property (nonatomic) BOOL canShowStallReminder;
@property (nonatomic) BOOL hasPreparedToPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)didEnterLandscape;
- (void)onPlayerAfterPrepareToPlay:(id)a0;
- (void)onPlayer:(id)a0 didChangeStallState:(long long)a1;
- (unsigned long long)cachedGearType;
- (void)changeToManualGearsType:(unsigned long long)a0 enterMethod:(long long)a1;
- (void)refreshButtonWithManualGearType:(unsigned long long)a0;
- (void)trackShowResolutionSettingsView;
- (void)updateCachedGearType:(unsigned long long)a0;
- (void)trackShowReminderWithChangeToType:(unsigned long long)a0 currentType:(unsigned long long)a1 state:(long long)a2;
- (void)trackChangeManualGearType:(unsigned long long)a0 enterMethod:(long long)a1;
- (void)handleClickResolutionButton;
- (void)trackShowStallReminder;
- (void)didDismissResolutionSettingsView;
- (void)resolutionSettingsViewDidChangeManualGearType:(unsigned long long)a0;
- (BOOL)isShowingPanel;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)reset;
- (void)viewDidLoad;

@end
