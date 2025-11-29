@class QryBankList4BindReq;
@protocol WCPayQryBankList4BindCgiDelegate;

@interface WCPayQryBankList4BindCgi : WCPayBaseCgi

@property (retain, nonatomic) QryBankList4BindReq *request;
@property (weak, nonatomic) id<WCPayQryBankList4BindCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)failWithECardCgiError:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
