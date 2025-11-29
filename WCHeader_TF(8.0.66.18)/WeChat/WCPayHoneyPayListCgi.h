@class HoneyPayListReq;
@protocol WCPayHoneyPayListCgiDelegate;

@interface WCPayHoneyPayListCgi : WCPayBaseCgi

@property (retain, nonatomic) HoneyPayListReq *request;
@property (weak, nonatomic) id<WCPayHoneyPayListCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)cacheResponse:(id)a0;

@end
