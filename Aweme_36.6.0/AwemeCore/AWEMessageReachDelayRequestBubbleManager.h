@class NSTimer, NSMutableArray, NSMutableDictionary;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachDelayRequestBubbleManager : NSObject

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (retain, nonatomic) NSMutableArray *showedBubblesList;
@property (retain, nonatomic) NSMutableArray *delayTaskQueue;
@property (retain, nonatomic) NSMutableDictionary *tabVisibilityDic;
@property (retain, nonatomic) NSMutableDictionary *delayRequestTrackParams;
@property (nonatomic) double delayTime;
@property (retain, nonatomic) NSTimer *delayRequestTimer;
@property (nonatomic) long long delayRequestTimes;
@property (nonatomic) BOOL isAppInBackground;

- (void)receiveTabVisibilityInfoWithResult:(id)a0 channelID:(id)a1;
- (id)getDelayRequestBubbleTrackParamsWithSource:(id)a0;
- (id)generateDelayTaskWithReason:(unsigned long long)a0 paramContext:(id)a1 channelID:(id)a2;
- (void)addDelayTaskToDelayQueueWithTask:(id)a0 delayTime:(double)a1;
- (void)removeDelayTaskFromDelayQueueWithParamContext:(id)a0;
- (void)stopDelayRequestTask;
- (void)addComponentLifeCyclePlugin;
- (void)receiveBubbleShowInfoWithResult:(id)a0;
- (long long)findIndexOfDelayRequestBubbleTaskWithTaskSource:(id)a0;
- (void)resetDelayRequestTask;
- (void)startDelayRequestTask;
- (BOOL)isDelayRequestTaskWithSource:(id)a0;
- (void)handleDelayRequestTaskFireEvent;
- (BOOL)canShowBubbleInAPPEnvironmentWithChannelID:(id)a0;
- (void)updateDelayRequestBubbleTrackParamsWithDelayRequestType:(unsigned long long)a0 delayTaskQueueCount:(long long)a1 delayRequestDuration:(double)a2;
- (id)generateDelayRequestBubbleMsgParamWithTask:(id)a0 showedBubblesList:(id)a1;
- (void)recordShowedBubblesWithComponentModel:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)startMonitor;

@end
