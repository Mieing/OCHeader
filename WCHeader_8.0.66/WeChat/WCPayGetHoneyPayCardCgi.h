@class GetHoneyPayCardReq;
@protocol WCPayGetHoneyPayCardCgiDelegate;

@interface WCPayGetHoneyPayCardCgi : WCPayBaseCgi

@property (retain, nonatomic) GetHoneyPayCardReq *request;
@property (weak, nonatomic) id<WCPayGetHoneyPayCardCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
