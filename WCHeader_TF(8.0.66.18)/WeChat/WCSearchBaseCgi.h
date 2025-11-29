@interface WCSearchBaseCgi : WCBaseCgi

@property (copy, nonatomic) id /* block */ _successBlock;
@property (copy, nonatomic) id /* block */ _failBlock;

- (id)init;
- (void).cxx_destruct;

@end
