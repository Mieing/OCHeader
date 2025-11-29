@protocol WCPayNotifyMchQRCodeSaveCgiDelegate;

@interface WCPayNotifyMchQRCodeSaveCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayNotifyMchQRCodeSaveCgiDelegate> cgiDelegate;

- (id)initWithDelegaet:(id)a0 request:(id)a1;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)failWithNetworking:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
