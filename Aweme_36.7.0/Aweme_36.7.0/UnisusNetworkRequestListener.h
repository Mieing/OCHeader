@interface UnisusNetworkRequestListener : NSObject

@property (copy, nonatomic) id /* block */ completion;

- (void)onRequestComplete:(id)a0;
- (id)initWithReuqestCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
