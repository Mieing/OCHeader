@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BDByteCastTimer : NSObject {
    struct { unsigned int timerIsInvalidated; unsigned int timerIsPaused; unsigned int timerIsFired; } _timerFlags;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double interval;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL isRepeats;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL isTarget;
@property double tolerance;

+ (id)timerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5;
+ (id)timerWithTimeInterval:(double)a0 userInfo:(id)a1 repeats:(BOOL)a2 dispatchQueue:(id)a3 block:(id /* block */)a4;

- (id)initWithTimeInterval:(double)a0 userInfo:(id)a1 repeats:(BOOL)a2 dispatchQueue:(id)a3;
- (void)resetTime;
- (void).cxx_destruct;
- (void)pause;
- (void)invalidate;
- (void)dealloc;
- (void)fire;
- (void)timerCallback;

@end
