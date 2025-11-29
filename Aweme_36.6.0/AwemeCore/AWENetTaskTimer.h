@class NSObject;
@protocol OS_dispatch_source;

@interface AWENetTaskTimer : NSObject

@property (nonatomic) double interval;
@property (nonatomic) BOOL repeat;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic) id /* block */ action;

+ (id)scheduledTimerWithInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;

- (id)initWithInterval:(double)a0 repeat:(BOOL)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (void)fire;

@end
