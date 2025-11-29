@protocol WCPayGetMchQRCodeCgiDelegate;

@interface WCPayGetMchQRCodeCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayGetMchQRCodeCgiDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0 request:(id)a1;
- (void)startRequestWithLoadCacheMode:(BOOL)a0;
- (void)didGetResponse:(id)a0;
- (void)failWithNetworking:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
