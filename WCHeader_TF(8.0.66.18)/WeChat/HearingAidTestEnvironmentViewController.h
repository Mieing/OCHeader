@class UIButton, HearingAidTestEnvironmentLogic, WCRecordFeedbackView, NSString, UIView, MMUILabel;

@interface HearingAidTestEnvironmentViewController : MMUIViewController <HearingAidInitLogicDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) WCRecordFeedbackView *soundWave;
@property (retain, nonatomic) MMUILabel *descTV;
@property (retain, nonatomic) HearingAidTestEnvironmentLogic *logic;
@property (retain, nonatomic) UIButton *startBtn;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isAudioInterruption;
@property (nonatomic) BOOL isInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)setUpUI;
- (void)setUpHeaderView;
- (id)genTitle;
- (id)genSoundWave;
- (id)genDesTV;
- (void)setUpFooterView;
- (void)viewDidLayoutSubviews;
- (void)updateLayout;
- (void)onStartBtnClick;
- (void)jumpTestUI;
- (void)initLogic;
- (void)onRespondSoundDB:(double)a0;
- (void)onChangeTestEnvironment:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidBeInteractivePoped;
- (void)onBackClick;
- (void)dataReport:(id)a0 processReult:(int)a1;
- (void)onResponseAudioInterruptionBegin;
- (void)onResponseAudioInterruptionEnd;
- (BOOL)judgeSelfIsPopVC;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive:(id)a0;
- (void).cxx_destruct;

@end
