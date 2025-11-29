@protocol WCPayOpenPalmServiceAuthCgiDelegate;

@interface WCPayOpenPalmServiceAuthCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayOpenPalmServiceAuthCgiDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
