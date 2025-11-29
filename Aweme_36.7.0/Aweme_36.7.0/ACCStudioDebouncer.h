@class NSObject;
@protocol OS_dispatch_queue;

@interface ACCStudioDebouncer : NSObject

@property (nonatomic) double delay;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ task;

- (void)debounce:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDelay:(double)a0;

@end
