@class CheckHoneyUserReq;
@protocol WCPayCheckHoneyUserCgiDelegate;

@interface WCPayCheckHoneyUserCgi : WCPayBaseCgi

@property (retain, nonatomic) CheckHoneyUserReq *request;
@property (weak, nonatomic) id<WCPayCheckHoneyUserCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
