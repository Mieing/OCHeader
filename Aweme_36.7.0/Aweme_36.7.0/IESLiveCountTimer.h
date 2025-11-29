@class NSObject;
@protocol OS_dispatch_source;

@interface IESLiveCountTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) unsigned long long countNum;
@property (nonatomic) float interval;
@property (nonatomic) float delay;
@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) id /* block */ complete;
@property (nonatomic) BOOL isCountDown;
@property (nonatomic) BOOL isRepeat;
@property (nonatomic) BOOL isSuspend;

+ (id)timerWithInterval:(float)a0 complete:(id /* block */)a1;
+ (id)countDownTimerWithCount:(unsigned long long)a0 interval:(float)a1 callBack:(id /* block */)a2 complete:(id /* block */)a3;
+ (id)timerWithInterval:(float)a0 delay:(float)a1 callBack:(id /* block */)a2;
+ (id)countTimerWithCount:(unsigned long long)a0 interval:(float)a1 callBack:(id /* block */)a2 complete:(id /* block */)a3;
+ (id)countDownTimerWithCount:(unsigned long long)a0 interval:(float)a1 delay:(float)a2 callBack:(id /* block */)a3 complete:(id /* block */)a4;
+ (id)countTimerWithCount:(unsigned long long)a0 interval:(float)a1 delay:(float)a2 callBack:(id /* block */)a3 complete:(id /* block */)a4;

- (id)initWithCount:(unsigned long long)a0 interval:(float)a1 delay:(float)a2 callBack:(id /* block */)a3 complete:(id /* block */)a4 countDown:(BOOL)a5 isRepeat:(BOOL)a6;
- (void)continueTimer;
- (BOOL)running;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (void)completeIfNeeded;

@end
