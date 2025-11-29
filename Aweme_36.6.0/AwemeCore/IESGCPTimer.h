@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IESGCPTimer : NSObject

@property (nonatomic) double timeInterval;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL repeats;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *realTimer;

+ (double)live_adaptTimeInterval:(double)a0;
+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5;
+ (id)scheduledTimerWithTimeInterval:(double)a0 queue:(id)a1 repeats:(BOOL)a2 block:(id /* block */)a3;

- (id)initWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5;
- (id)initWithTimeInterval:(double)a0 queue:(id)a1 repeats:(BOOL)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)timerFired;
- (void)suspend;
- (void)schedule;
- (void)dealloc;
- (void)fire;

@end
