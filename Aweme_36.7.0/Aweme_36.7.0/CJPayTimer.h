@class CJPayTimerQueueBridge, NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CJPayTimerProtocol;

@interface CJPayTimer : NSObject <CJPayTimerQueueBridgeProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) int curCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) CJPayTimerQueueBridge *bridge;
@property (nonatomic) BOOL needRefreshWhenEnterForeground;
@property (nonatomic) double startTime;
@property (nonatomic) int startCount;
@property (weak, nonatomic) id<CJPayTimerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTimerWithCountTime:(int)a0;
- (void)currentCountChangeTo:(int)a0;
- (void)bridgeMethod;
- (void)appEnterForeground;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
