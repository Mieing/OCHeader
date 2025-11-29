@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CJPayTimerProtocol;

@interface CJPayMsTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic) long long curCount;
@property (nonatomic) long long startCount;
@property (nonatomic) long long interval;
@property (nonatomic) BOOL needRefreshWhenEnterForeground;
@property (nonatomic) double startTime;
@property (weak, nonatomic) id<CJPayTimerProtocol> delegate;

- (void)appEnterForground;
- (void)startTimerWithCountTime:(long long)a0;
- (void)currentCountChangeTo:(int)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithTimeInterval:(int)a0;
- (void)dealloc;

@end
