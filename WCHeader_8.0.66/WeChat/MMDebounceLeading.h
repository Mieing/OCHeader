@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface MMDebounceLeading : MMDebounce

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSDate *lastCallTaskDate;

- (id)initWithInterval:(double)a0 onQueue:(id)a1 taskBlock:(id /* block */)a2;
- (void)call;
- (void)invalidate;
- (void)runTaskDirectly;
- (void).cxx_destruct;

@end
