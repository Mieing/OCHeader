@interface BFExecutor : NSObject

@property (copy, nonatomic) id /* block */ block;

+ (id)mainThreadExecutor;
+ (id)executorWithBlock:(id /* block */)a0;
+ (id)immediateExecutor;
+ (id)executorWithDispatchQueue:(id)a0;
+ (id)executorWithOperationQueue:(id)a0;
+ (id)defaultExecutor;

- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
