@class GetMCreditLineTokenSignReq;
@protocol HoneyPayGetMCreditLineTokenCgiDelegate;

@interface HoneyPayGetMCreditLineTokenCgi : WCPayBaseCgi

@property (retain, nonatomic) GetMCreditLineTokenSignReq *request;
@property (weak, nonatomic) id<HoneyPayGetMCreditLineTokenCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
