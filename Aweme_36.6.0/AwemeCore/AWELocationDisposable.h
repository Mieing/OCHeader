@interface AWELocationDisposable : NSObject

@property (copy, nonatomic) id /* block */ disposeBlock;

- (id)initWithDisposeBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dispose;
- (void)dealloc;

@end
