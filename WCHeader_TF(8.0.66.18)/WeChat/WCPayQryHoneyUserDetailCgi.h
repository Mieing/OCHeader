@class QryHoneyUserDetailReq;
@protocol WCPayQryHoneyUserDetailCgiDelegate;

@interface WCPayQryHoneyUserDetailCgi : WCPayBaseCgi

@property (retain, nonatomic) QryHoneyUserDetailReq *request;
@property (weak, nonatomic) id<WCPayQryHoneyUserDetailCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
