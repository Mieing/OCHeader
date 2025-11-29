@class NSString, UIImageView, AWELiveFeedLabelTagView, UIView, NSTimer;
@protocol AWELivingTag;

@interface AWELiveStreamTagElement : AWELiveLeftElement <AWELivePreStreamEnterRoomDataProvider>

@property (nonatomic) BOOL disableMainLabel;
@property (nonatomic) BOOL disableAssistLabel;
@property (retain, nonatomic) UIView<AWELivingTag> *liveTagGradientView;
@property (retain, nonatomic) UIImageView *liveTagImage;
@property (retain, nonatomic) AWELiveFeedLabelTagView *assistFeedLabel;
@property (retain, nonatomic) AWELiveFeedLabelTagView *cycleAssistFeedLabel;
@property (retain, nonatomic) AWELiveFeedLabelTagView *mainFeedLabel;
@property (nonatomic) long long index;
@property (nonatomic) long long assistLabelStyle;
@property (nonatomic) double lastTime;
@property (nonatomic) BOOL isPaid;
@property (nonatomic) BOOL isClickUnionTag;
@property (nonatomic) BOOL isClickMainFeedTag;
@property (retain, nonatomic) NSTimer *recommendTimer;
@property (nonatomic) long long recommendTimerCount;
@property (nonatomic) BOOL viewDidDisappear;
@property (nonatomic) BOOL recommendActionFromRecommendGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;

- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisAppear;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (void)streamPlayer_finish;
- (void)performRecommendGuideWithCompletion:(id /* block */)a0 hasRecommend:(BOOL)a1;
- (void)updatePaidLiveFeedAssistLableWithCountTime:(double)a0;
- (void)updateFeedAssistLableWithCountTime:(double)a0 isPaid:(BOOL)a1;
- (void)updatePaidStreamFeedAssistLable;
- (void)makeViewConstraint;
- (void)addrecommend:(id)a0;
- (void)removerecommend:(id)a0;
- (void)clearRecommendTag;
- (void)clearRecommendTimer;
- (void)startCycleAnimation;
- (void)scheduledRecommendTimer;
- (void)p_remakeAssistLabelIfNeed;
- (void)trackUrgedLabelShowIfNeeded;
- (void)reloadLiveTag:(BOOL)a0;
- (void)recommendTimerAction;
- (void)p_trackRecommendLabelShow;
- (void)recommendAssistFeedLabelClick;
- (id)preferTagImageURLList;
- (id)getTagElementAccessibilityDesc;
- (void)setupMainFeedLabelClickAction;
- (void)p_trackFeedLabelShow:(long long)a0;
- (void)p_trackTagShow:(id)a0 labelType:(long long)a1;
- (void)clearRecommendTagClick;
- (void)configRecommendTagClick;
- (void)p_trackFeedLabelClick:(long long)a0;
- (void)p_trackRecommendLabelClick;
- (void)p_trackRecommendGuideShow;
- (void)assistFeedLabelClick;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)prepareForReuse;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
