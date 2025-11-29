@protocol WCPayRealnameVerifyParentCgiDeleagte;

@interface WCPayRealnameVerifyParentCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayRealnameVerifyParentCgiDeleagte> cgiDelegate;

- (id)init;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
