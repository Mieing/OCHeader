@class CheckHoneyPayerReq;
@protocol WCPayCheckHoneyPayerCgiDelegate;

@interface WCPayCheckHoneyPayerCgi : WCPayBaseCgi

@property (retain, nonatomic) CheckHoneyPayerReq *request;
@property (weak, nonatomic) id<WCPayCheckHoneyPayerCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
