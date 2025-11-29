@class LSUploadBandwidthProber, PreviewStreamInfo, UIView, UIImageView, UIButton, NSMutableArray, IESLiveCDNSpeedTestApi, UILabel;
@protocol IESLiveAnimatedViewProtocol, IESLiveAnchorDynamicClarityPreferenceService, IESLiveAnchorUploadBandwidthProberService;

@interface IESLiveCDNSpeedTestView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *speedTestStartImageview;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *startTestButton;
@property (retain, nonatomic) UIView<IESLiveAnimatedViewProtocol> *testAnimationView;
@property (retain, nonatomic) UILabel *testTipsLable;
@property (retain, nonatomic) UIView *lineTestContainer;
@property (retain, nonatomic) UIButton *stopTestButton;
@property (retain, nonatomic) UILabel *currentLineTestLabel;
@property (retain, nonatomic) UIImageView *currentLineTestImageView;
@property (retain, nonatomic) UIImageView *speedTestEndImageview;
@property (retain, nonatomic) UILabel *testResultLabel;
@property (retain, nonatomic) UILabel *lineDescLabel;
@property (retain, nonatomic) UIButton *testResultButton;
@property (retain, nonatomic) PreviewStreamInfo *currentPreviewStreamInfo;
@property (retain, nonatomic) LSUploadBandwidthProber *prober;
@property (retain, nonatomic) IESLiveCDNSpeedTestApi *speedTestApi;
@property (nonatomic) long long speedTestCount;
@property (nonatomic) long long speedTestUrlEmptyCount;
@property (nonatomic) long long totalTestCount;
@property (retain, nonatomic) NSMutableArray *speedTestResults;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (nonatomic) unsigned long long testStatus;
@property (nonatomic) BOOL didClickOpenLive;
@property (retain, nonatomic) id<IESLiveAnchorUploadBandwidthProberService> proberService;
@property (copy, nonatomic) id /* block */ didClickOpenLiveHandler;

- (BOOL)useNewStyle;
- (void)stopRotateAnimation;
- (void)updateCDNSpeedTestStatus:(unsigned long long)a0;
- (void)requestCDNPreviewStreamInfo;
- (void)resetTestStatus;
- (void)createLineTestView;
- (void)updateLineTestViewStatus:(unsigned long long)a0;
- (void)updateSelectCDNLine;
- (id)getRoomMode;
- (void)startSpeedTest;
- (void)shouldHiddenTestStartView:(BOOL)a0;
- (void)shouldHiddenTestLoadingView:(BOOL)a0;
- (void)shouldHiddenTestEndView:(BOOL)a0;
- (void)p_openLiveAction;
- (void)playScaleAnimation;
- (void)p_testAgainAction;
- (void)p_exitAction;
- (void)playRotateAnimation;
- (id)createLineTestLabel;
- (id)createLineTestImageView;
- (void)p_startTestAction;
- (void)p_stopTestAction;
- (id)initWithLiveType:(unsigned long long)a0 diContext:(id)a1;
- (void)hideCDNSpeedTestView;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupSubviews;

@end
