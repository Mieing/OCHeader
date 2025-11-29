@class NSDictionary, IESLiveAudienceContainerContext, NSString;
@protocol IESLivePromotionFpsService, IESLiveStrategyService;

@interface IESLiveAudienceExperiencePlugin : IESLiveAudiencePlugin <IESLiveStrategyEventDispatcherObserver>

@property (retain, nonatomic) IESLiveAudienceContainerContext *context;
@property (retain, nonatomic) id<IESLiveStrategyService> strategyService;
@property (retain, nonatomic) id<IESLivePromotionFpsService> promotionFps;
@property (retain, nonatomic) NSDictionary *strategySmoothSwitchResolutionPreValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void)didEnterRoom:(id)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (void)didStartPlay:(id)a0;
- (void)collectStrategyInfo;
- (void)removeStrategyObserver;
- (BOOL)strategyUpdateFactor:(id)a0 toValue:(id)a1;
- (BOOL)strategyAlwaysUpdateFactor:(id)a0;
- (void)componentFirstFrameDidStartLoad;
- (void)registerStrategyObserver;
- (void)resetHMDFilter;
- (void)batchStrategy;
- (BOOL)canUseLiveTask;
- (void)updateHDMFilter;
- (void)configUserInteractionMonitor:(BOOL)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;
- (void)commonInit;
- (void)viewWillAppear;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
