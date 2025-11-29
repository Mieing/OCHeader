@class ModifyHoneyPayerNotifyReq;
@protocol WCPayModifyHoneyPayerNotifyCgiDelegate;

@interface WCPayModifyHoneyPayerNotifyCgi : WCPayBaseCgi

@property (retain, nonatomic) ModifyHoneyPayerNotifyReq *request;
@property (weak, nonatomic) id<WCPayModifyHoneyPayerNotifyCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
