@class VoiceContainerView, HearingAidSuccessLogic, UIImageView, WeToast, RoundButton, NSString, MMUILabel;

@interface HearingAidSuccessViewController : MMUIViewController <MMTipsViewControllerDelegate, VoiceContainerViewDelegate, RoundButtonDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *curPlayIcon;
@property (retain, nonatomic) VoiceContainerView *container;
@property (retain, nonatomic) HearingAidSuccessLogic *logic;
@property (nonatomic) BOOL isAudioInterruption;
@property (retain, nonatomic) WeToast *toast;
@property (retain, nonatomic) RoundButton *clearlyBtn;
@property (retain, nonatomic) RoundButton *unclearlyBtn;
@property (retain, nonatomic) UIImageView *clearlyBtnImage;
@property (retain, nonatomic) UIImageView *unclearlyBtnImage;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL isFromInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initUI;
- (void)genContainer;
- (id)genButtonsView;
- (void)initRoundButton:(BOOL)a0;
- (void)controlPlay:(unsigned long long)a0;
- (void)onConfirmBtnClick;
- (void)onRefuseBtnClick;
- (void)dataReport:(id)a0 params:(id)a1;
- (void)showTipsAboutLowVolume;
- (BOOL)useCustomNavibar;
- (BOOL)useBlackStatusbar;
- (void)setUpPlayUI:(BOOL)a0;
- (void)popBackToInitView:(BOOL)a0;
- (BOOL)shouldInteractivePop;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)onResponseAudioInterruptionBegin;
- (void)onResponseAudioInterruptionEnd;
- (id)navigationBarBackgroundColor;
- (BOOL)judgeSelfIsPopVC;
- (void)appDidEnterBackground;
- (void)VoiceContainerView_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)VoiceContainerView_touchesEnded:(id)a0 withEvent:(id)a1;
- (void)RoundButton_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)RoundButton_touchesEnded:(id)a0 withEvent:(id)a1;
- (void)RoundButton_touchesEnded_right:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
