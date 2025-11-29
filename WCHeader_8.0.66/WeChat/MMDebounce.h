@interface MMDebounce : NSObject

@property (nonatomic) double interval;
@property (copy, nonatomic) id /* block */ taskBlock;

- (id)initWithInterval:(double)a0 taskBlock:(id /* block */)a1;
- (id)initWithInterval:(double)a0 onQueue:(id)a1 taskBlock:(id /* block */)a2;
- (id)initWithDebounceMode:(unsigned long long)a0 interval:(double)a1 onQueue:(id)a2 taskBlock:(id /* block */)a3;
- (void)call;
- (void)invalidate;
- (void).cxx_destruct;

@end
