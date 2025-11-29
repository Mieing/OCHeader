@class NSObject;
@protocol OS_dispatch_queue;

@interface MMDebounceTrailing : MMDebounce

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ block;

- (id)initWithInterval:(double)a0 onQueue:(id)a1 taskBlock:(id /* block */)a2;
- (void)call;
- (void)invalidate;
- (void).cxx_destruct;

@end
