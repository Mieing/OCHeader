@class NSTimer, NSMutableArray;

@interface IESLiveIMByteLinkDispatcher : IESLiveIMMessageNormalDispatcher

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableArray *delayMessageList;

- (long long)decideMessageCacheType:(id)a0;
- (void)removeSubscriber:(id)a0 forMessages:(id)a1;
- (void)didRecieveMessages:(id)a0;
- (void)logWith:(id)a0 params:(id)a1;
- (void)addMessageToCache:(id)a0;
- (void)checkDispatchTimerStatus;
- (void)doTimerLoopAction;
- (void).cxx_destruct;
- (id)init;

@end
