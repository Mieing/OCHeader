@class MMContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AACWeakTimer : NSObject {
    struct { unsigned int timerIsInvalidated; } _timerFlags;
    MMContext *m_context;
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

- (id)initWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)resetTimerProperties;
- (void)schedule;
- (void)fire;
- (void)invalidate;
- (void)timerFired;
- (void).cxx_destruct;

@end
