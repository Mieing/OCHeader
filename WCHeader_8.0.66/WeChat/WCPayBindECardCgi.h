@class BindECardReq;
@protocol WCPayBindECardCgiDelegate;

@interface WCPayBindECardCgi : WCPayBaseTenPayCgi

@property (retain, nonatomic) BindECardReq *request;
@property (weak, nonatomic) id<WCPayBindECardCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)failWithECardCgiError:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
