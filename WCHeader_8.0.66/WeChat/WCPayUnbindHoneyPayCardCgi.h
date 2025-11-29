@class UnbindHoneyPayCardReq;
@protocol WCPayUnbindHoneyPayCardCgiDelegate;

@interface WCPayUnbindHoneyPayCardCgi : WCPayBaseCgi

@property (retain, nonatomic) UnbindHoneyPayCardReq *request;
@property (weak, nonatomic) id<WCPayUnbindHoneyPayCardCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
