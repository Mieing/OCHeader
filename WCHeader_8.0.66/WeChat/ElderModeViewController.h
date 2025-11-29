@class UIStackView, NSString, UIScrollView, UIView, UIButton;

@interface ElderModeViewController : MMUIViewController <ElderModeExt, HearingAidExt>

@property (nonatomic) long long scene;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *contentStack;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) UIButton *openOrCloseButton;
@property (nonatomic) BOOL showElderModeToast;
@property (nonatomic) BOOL disableAutoJumpWhenElderModeOpen;
@property (nonatomic) BOOL showInWeCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateGradientLayer;
- (void)registerYReportSdk;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (id)logoHeadView;
- (id)managerForOnMode;
- (void)loadModeOffComponents;
- (void)appendModeOffTitle:(id)a0;
- (void)appendModeOffDescriptions:(id)a0;
- (void)appendModeOffDescription:(id)a0;
- (void)loadModeOnComponents;
- (void)addSpacerOfMinHeight:(double)a0;
- (void)onFontLevelSwitchChanged:(id)a0;
- (void)onTextToSpeechSwitchChanged:(id)a0;
- (void)onSilentModeSwitchChanged:(id)a0;
- (void)onHearingAidClick:(id)a0;
- (void)onQuickCallClick:(id)a0;
- (void)closeElderMode;
- (void)openElderMode;
- (void)setElderModeOn:(BOOL)a0;
- (void)reloadDataForElderModeChange;
- (void)onHearingAidModeChange:(unsigned long long)a0;
- (void)onSetElderModeOn:(BOOL)a0 success:(BOOL)a1;
- (void)onSetSpecialRenderModeOn:(BOOL)a0 success:(BOOL)a1;
- (void)onSetSilentModeOn:(BOOL)a0 success:(BOOL)a1;
- (void)dataReport:(BOOL)a0 viewID:(id)a1;
- (void).cxx_destruct;

@end
