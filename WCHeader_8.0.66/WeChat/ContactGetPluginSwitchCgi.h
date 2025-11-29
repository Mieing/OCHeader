@interface ContactGetPluginSwitchCgi : WCBaseCgi

@property (copy, nonatomic) id /* block */ onGetSwitchBlock;

- (id)initWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
