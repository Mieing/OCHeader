@class IESLivePEDecisionService, NSDictionary, NSString, NSMutableArray, IESLiveInnerFeedContext;
@protocol IESLiveNetworkQualityInfoService;

@interface IESLiveInnerFeedThresholdStrategy : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnerFeedDisplayAction, IESLiveInnerFeedThresholdStrategyService, IESLivePEDecisionObserver>

@property (retain, nonatomic) IESLivePEDecisionService *decisionService;
@property (retain, nonatomic) id<IESLiveNetworkQualityInfoService> networkService;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) NSMutableArray *recentTimes;
@property (retain, nonatomic) NSMutableArray *recentCPUs;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) long long maxDecisionCount;
@property (retain, nonatomic) NSDictionary *features;
@property (copy, nonatomic) id /* block */ decisionCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillBeginDragging:(id)a0;
- (void)innerFeedDidEndDecelerating:(id)a0;
- (void)innerFeedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)innerFeedWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)decision:(id)a0 result:(id)a1;
- (BOOL)matchEnterSource;
- (BOOL)matchStrategy;
- (void)decisionWithCompletion:(id /* block */)a0;
- (void)addCPURate;
- (long long)threshold;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
