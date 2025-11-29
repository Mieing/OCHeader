@class UIButton, NSString, UIView;
@protocol AWENoxusPlayerSettingTypeView;

@interface AWELandscapeSpeedSettingElement : AWELandscapeInteractionBaseElement <AWENoxusPlayerSettingTypeViewDelegate>

@property (retain, nonatomic) UIButton *speedButton;
@property (retain, nonatomic) UIView<AWENoxusPlayerSettingTypeView> *speedSettingView;
@property (nonatomic) BOOL isShowingSpeedPanel;
@property (copy, nonatomic) NSString *speedChangeMethod;
@property (nonatomic) long long speedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)onPlayerDidReadyForDisplay:(id)a0;
- (void)hideAllPanels;
- (void)didEnterLandscape;
- (void)noxusSettingTypeListSelectModel:(id)a0;
- (void)noxusSettingTypeDismiss:(BOOL)a0;
- (void)trackPlayTimeWithSpeedMethod:(id)a0;
- (void)traceSpeedValueSelected:(id)a0 enterMethod:(id)a1 extraDict:(id)a2;
- (void)trackSpeedModePlayTimeWithEnterMethod:(id)a0 extraDict:(id)a1;
- (void)updateSpeedButtonWithPlaybackRate:(double)a0;
- (void)dismissSpeedSettingView;
- (void)traceSpeedButtonClicked;
- (void)showSpeedSettingView;
- (BOOL)isShowingPanel;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;

@end
