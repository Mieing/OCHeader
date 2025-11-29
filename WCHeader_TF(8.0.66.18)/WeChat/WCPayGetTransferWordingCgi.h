@protocol WCPayGetTransferWordingCgiDelegate;

@interface WCPayGetTransferWordingCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayGetTransferWordingCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didGetTenPayError:(id)a0;

@end
