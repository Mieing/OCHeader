@protocol WCPayRealnameVerifyGuardianCgiCgiDelegate;

@interface WCPayRealnameVerifyGuardianCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayRealnameVerifyGuardianCgiCgiDelegate> cgiDelegate;

- (id)init;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
