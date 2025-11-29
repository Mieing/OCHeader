@class NSObject, NSMutableArray, IESLiveGCDTimer;
@protocol OS_dispatch_queue, IESLivePortalReaction;

@interface IESLivePortalRedEnvelopeQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) IESLiveGCDTimer *countTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (weak, nonatomic) id<IESLivePortalReaction> reactions;
@property (readonly, nonatomic) unsigned long long count;

- (void)setupTimerIfNeeded;
- (void)cancelTimerIfNeeded;
- (void)updateRedEnvelopeInfo;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (void)dequeue:(long long)a0;

@end
