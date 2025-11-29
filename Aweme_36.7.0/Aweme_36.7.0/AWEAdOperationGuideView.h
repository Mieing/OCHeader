@class AWEAwemeModel, NSString, AWEButton, AWEMarkView, UIView, NSTimer, UIImageView;
@protocol AWEAdOperationComponentViewProtocol;

@interface AWEAdOperationGuideView : UIView <AWESearchAdAppointmentResultMessage, BDATMAutoTrackerViewProtocol, CAAnimationDelegate, AWEAdOperationGuideView>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEButton *replayBtn;
@property (retain, nonatomic) AWEMarkView *rewardView;
@property (retain, nonatomic) NSTimer *replayTimer;
@property (nonatomic) long long replaySecond;
@property (retain, nonatomic) UIImageView *lightenImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIView<AWEAdOperationComponentViewProtocol> *componentView;
@property (retain, nonatomic) AWEButton *learnMoreBtn;

- (void)detectAbnormalDisplay;
- (BOOL)isFromGeneralSearch;
- (void)handleAppointmentResultWithAdModel:(id)a0 sceneType:(long long)a1 appointmentStatus:(BOOL)a2 error:(id)a3;
- (void)openShowAutoTracker;
- (void)resetReplayBtnTitle;
- (void)replayBtnClicked:(id)a0;
- (id)buildComponentViewWithModel:(id)a0;
- (void)configDifferentUIWithMaskType:(unsigned long long)a0;
- (void)startButtonAnimation;
- (void)startExpandAnimation;
- (void)startFlashAnimation;
- (id)createCubicBezierAnimationWith:(id)a0 duration:(double)a1 timingFunction:(id)a2;
- (void)setupComponentViewUIWithModel:(id)a0;
- (void)resetLearnMoreButtonImage;
- (void)updateRewardView:(id)a0;
- (void)configLearnMoreButtonForLiveAppointmentIfNeeded;
- (void)learnMoreBtnClicked:(id)a0;
- (void)onRewardViewClicked:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;
- (void)startMonitor;

@end
