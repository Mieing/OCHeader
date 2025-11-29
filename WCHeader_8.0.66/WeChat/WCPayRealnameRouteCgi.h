@interface WCPayRealnameRouteCgi : WCPayBaseCgi

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (nonatomic) int fromScene;
@property (nonatomic) int payScene;

- (id)init;
- (void)startWithCompletion:(id /* block */)a0 failure:(id /* block */)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
