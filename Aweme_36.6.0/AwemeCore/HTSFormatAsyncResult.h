@interface HTSFormatAsyncResult : NSObject

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (readonly, nonatomic) BOOL finished;

- (void)observerSuccess:(id /* block */)a0 error:(id /* block */)a1;
- (void)finishWithSuccess;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;

@end
