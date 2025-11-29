@class NSObject;
@protocol OS_dispatch_source;

@interface ACCScrollTrackerTimer : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;

+ (id)repeatingTimerWithTimeInterval:(double)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
