@interface AWERxDisposable : NSObject

@property (copy, nonatomic) id /* block */ disposeBlock;

- (id)initWithDisposeBlock:(id /* block */)a0;
- (void)ownedBy:(id)a0;
- (void)ownedBy:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)dispose;
- (void)dealloc;

@end
