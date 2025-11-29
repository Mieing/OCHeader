@class PayIBGCheckJsapiSignReq;
@protocol WCPayIBGCheckJSAPICgiDelegate;

@interface WCPayIBGCheckJSAPICgi : WCPayBaseCgi

@property (retain, nonatomic) PayIBGCheckJsapiSignReq *request;
@property (weak, nonatomic) id<WCPayIBGCheckJSAPICgiDelegate> delegate;

- (id)init;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
