@class QryHoneyPayerDetailReq;
@protocol WCPayQryHoneyPayerDetailCgiDelegate;

@interface WCPayQryHoneyPayerDetailCgi : WCPayBaseCgi

@property (retain, nonatomic) QryHoneyPayerDetailReq *request;
@property (weak, nonatomic) id<WCPayQryHoneyPayerDetailCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
