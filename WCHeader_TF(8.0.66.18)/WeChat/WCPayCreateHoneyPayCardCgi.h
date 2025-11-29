@class CreateHoneyPayCardReq;
@protocol WCPayCreateHoneyPayCardCgiDelegate;

@interface WCPayCreateHoneyPayCardCgi : WCPayBaseCgi

@property (retain, nonatomic) CreateHoneyPayCardReq *request;
@property (weak, nonatomic) id<WCPayCreateHoneyPayCardCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
