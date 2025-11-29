@interface WCPayWalletLockReportCgi : WCPayBaseTenPayCgi

- (id)init;
- (void)startRequest:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;

@end
