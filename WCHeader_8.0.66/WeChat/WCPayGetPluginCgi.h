@protocol WCPayGetPluginCgiDelegate;

@interface WCPayGetPluginCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayGetPluginCgiDelegate> logicDelegate;

- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
