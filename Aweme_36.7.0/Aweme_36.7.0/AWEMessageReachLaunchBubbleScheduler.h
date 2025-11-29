@class NSMutableArray, AWEMessageReachBubbleRequestTask;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachLaunchBubbleScheduler : NSObject

@property (nonatomic) BOOL coldLaunchBarrierFinished;
@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> delegate;
@property (retain, nonatomic) NSMutableArray *suspendedTasks;
@property (retain, nonatomic) AWEMessageReachBubbleRequestTask *resumingTask;
@property (nonatomic) double lastBubbleShowMediaTime;
@property (nonatomic) double lastResumeBubbleShowMediaTime;

+ (void)tryShowBubbleWithModel:(id)a0 channelID:(id)a1 block:(id /* block */)a2;
+ (void)handleBubbleCancelRetry;
+ (void)handleBubbleTryShowWithResult:(id)a0 bubbleModel:(id)a1 channel:(id)a2;

- (void)tryShowBubbleWithModel:(id)a0 channelID:(id)a1 block:(id /* block */)a2;
- (void)handleBubbleCancelRetry;
- (void)handleColdLaunchRequestFailed;
- (void)handleColdLaunchSendBubble:(BOOL)a0;
- (void)handleBubbleTryShowWithResult:(id)a0 bubbleModel:(id)a1 channel:(id)a2;
- (void)markColdLaunchBarrierFinished;
- (void)clearSuspendedTasks;
- (void)tryResumeSuspendedTasks;
- (id)getCacheBlockBubbleModelForChannelID:(id)a0;
- (void)resumeSuspendedTasks;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setup;

@end
