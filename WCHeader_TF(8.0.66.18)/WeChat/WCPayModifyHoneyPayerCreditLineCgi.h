@class ModifyHoneyPayerCreditLineReq;
@protocol WCPayModifyHoneyPayerCreditLineCgiDelegate;

@interface WCPayModifyHoneyPayerCreditLineCgi : WCPayBaseCgi

@property (retain, nonatomic) ModifyHoneyPayerCreditLineReq *request;
@property (weak, nonatomic) id<WCPayModifyHoneyPayerCreditLineCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
