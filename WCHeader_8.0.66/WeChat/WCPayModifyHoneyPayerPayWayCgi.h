@class ModifyHoneyPayerPayWayReq;
@protocol WCPayModifyHoneyPayerPayWayCgiDelegate;

@interface WCPayModifyHoneyPayerPayWayCgi : WCPayBaseCgi

@property (retain, nonatomic) ModifyHoneyPayerPayWayReq *request;
@property (weak, nonatomic) id<WCPayModifyHoneyPayerPayWayCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
