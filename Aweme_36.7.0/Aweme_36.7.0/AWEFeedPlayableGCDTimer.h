@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWEFeedPlayableGCDTimer : NSObject <AWEFeedPlayableGCDTimer>

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL repeats;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *realTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scheduledTimerWithTimeInterval:(double)a0 block:(id /* block */)a1 repeats:(BOOL)a2 dispatchQueue:(id)a3;

- (id)initWithTimeInterval:(double)a0 block:(id /* block */)a1 repeats:(BOOL)a2 dispatchQueue:(id)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)timerFired;
- (void)resume;
- (void)dealloc;
- (void)fire;

@end
