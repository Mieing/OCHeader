@class NSString, NSObject;

@interface RACKVOTrampoline : RACDisposable

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSObject *unsafeTarget;
@property (readonly, weak, nonatomic) NSObject *weakTarget;
@property (readonly, weak, nonatomic) NSObject *observer;

- (void)live_takeover_dispose;
- (id)initWithTarget:(id)a0 observer:(id)a1 keyPath:(id)a2 options:(unsigned long long)a3 block:(id /* block */)a4;
- (void).cxx_destruct;
- (void)dispose;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
