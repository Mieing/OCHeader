@class IESLiveInnerFeedContext, NSTimer, NSString;
@protocol IESLiveStrategyService;

@interface IESLiveInnerFeedStrategyReplaceController : NSObject <IESLiveInnerFeedDataControlAction>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (weak, nonatomic) id<IESLiveStrategyService> strategyService;
@property (nonatomic) double lastDeleteInterval;
@property (nonatomic) long long minActionInterval;
@property (nonatomic) long long delayTime;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long timerIndex;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillMountObject:(id)a0 atIndex:(long long)a1 currentIndex:(long long)a2;
- (void)innerFeedWillUnMountObject:(id)a0 atIndex:(long long)a1 unmountType:(long long)a2;
- (void)checkNextVideoAction:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
