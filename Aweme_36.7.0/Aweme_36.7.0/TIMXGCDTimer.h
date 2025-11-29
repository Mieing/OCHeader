@class TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TIMXGCDTimer : NSObject {
    struct { unsigned int timerIsInvalidated; } _timerFlags;
    TIMXSDKInstance *_r;
}

@property (nonatomic) double timeInterval;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL repeats;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property double tolerance;

+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5;
+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5 rootObject:(id)a6;

- (id)initWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5 rootObject:(id)a6;
- (void)resetTimerProperties;
- (void).cxx_destruct;
- (void)invalidate;
- (void)timerFired;
- (id)description;
- (id)init;
- (void)schedule;
- (void)dealloc;
- (void)fire;

@end
