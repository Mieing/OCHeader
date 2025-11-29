@class QryHoneyPayCardDetailReq;
@protocol WCPayQryHoneyPayCardDetailCgiDelegate;

@interface WCPayQryHoneyPayCardDetailCgi : WCPayBaseCgi

@property (retain, nonatomic) QryHoneyPayCardDetailReq *request;
@property (weak, nonatomic) id<WCPayQryHoneyPayCardDetailCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
