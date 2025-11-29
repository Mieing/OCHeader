@interface AWEIMRetryHelper : NSObject

@property (nonatomic) long long targetRetryCount;
@property (nonatomic) long long currentRetryCount;
@property (copy, nonatomic) id /* block */ retryBlock;

- (BOOL)retryIfNeeded;
- (id)initWithRetryCount:(long long)a0 retryBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)canRetry;

@end
