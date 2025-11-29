@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEECOMIMDebounceTrailing : AWEECOMIMDebounce

@property (nonatomic) double interval;
@property (copy, nonatomic) id /* block */ taskBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ block;

- (id)initWithInterval:(double)a0 onQueue:(id)a1 taskBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (void)call;

@end
