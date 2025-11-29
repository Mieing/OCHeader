@protocol WCPayWalletGetAllFunctionCgiDelegate;

@interface WCPayWalletGetAllFunctionCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayWalletGetAllFunctionCgiDelegate> cgiDelegate;

- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (id)cachePath;
- (void)startRequest;
- (void)callDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
