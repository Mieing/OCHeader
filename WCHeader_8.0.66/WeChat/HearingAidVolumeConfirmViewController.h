@class RoundButton, NSString, UIImageView, NSTimer, AbandonTextView, HearingAidVolumeConfirmLogic, MMUILabel;

@interface HearingAidVolumeConfirmViewController : MMUIViewController <MMTipsViewControllerDelegate, RoundButtonDelegate, AbandonTextViewDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) RoundButton *confirmBtn;
@property (retain, nonatomic) UIImageView *confirmBtnImage;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *hideTimer;
@property (retain, nonatomic) MMUILabel *tipView;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isAudioInterruption;
@property (retain, nonatomic) AbandonTextView *goBackHomeBtn;
@property (nonatomic) BOOL isInit;
@property (retain, nonatomic) HearingAidVolumeConfirmLogic *logic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidPushOrPresent:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)stopPlaying;
- (void)restartPlaying;
- (id)genIcon;
- (void)initTitle;
- (void)initConfirmBtn;
- (void)initTipsView;
- (void)genbackBtn;
- (void)viewDidLayoutSubviews;
- (void)updateLayout;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)beginPlay;
- (void)deallocTimer;
- (void)onResponseAudioInterruptionBegin;
- (void)onResponseAudioInterruptionEnd;
- (BOOL)judgeSelfIsPopVC;
- (void)dataReport:(BOOL)a0;
- (void)viewDidBeInteractivePoped;
- (void)onBackClick;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive:(id)a0;
- (void)RoundButton_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)RoundButton_touchesEnded:(id)a0 withEvent:(id)a1;
- (void)AbandonTextView_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)AbandonTextView_touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
