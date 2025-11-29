@class GetCreateTokenSignReq;
@protocol HoneyPayGetCreateTokenSignCgiDelegate;

@interface HoneyPayGetCreateTokenSignCgi : WCPayBaseCgi

@property (retain, nonatomic) GetCreateTokenSignReq *request;
@property (weak, nonatomic) id<HoneyPayGetCreateTokenSignCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
