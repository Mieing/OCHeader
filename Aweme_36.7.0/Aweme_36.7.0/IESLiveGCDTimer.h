@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface IESLiveGCDTimer : NSObject

@property (weak, nonatomic) id target;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL repeats;
@property BOOL isScheduled;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double timeInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *realTimer;

+ (double)live_adaptTimeInterval:(double)a0;
+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5;
+ (id)scheduledTimerWithTimeInterval:(double)a0 queue:(id)a1 repeats:(BOOL)a2 block:(id /* block */)a3;

- (void)prf_IESLiveGCDTimerInitCommon;
- (id)initWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5;
- (id)initWithTimeInterval:(double)a0 queue:(id)a1 repeats:(BOOL)a2 block:(id /* block */)a3;
- (void)initCommon;
- (void).cxx_destruct;
- (void)invalidate;
- (void)timerFired;
- (void)suspend;
- (void)schedule;
- (void)dealloc;
- (void)fire;

@end
