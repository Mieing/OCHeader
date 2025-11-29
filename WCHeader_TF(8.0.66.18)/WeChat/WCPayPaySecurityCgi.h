@protocol WCPayPaySecurityCgiDelegate;

@interface WCPayPaySecurityCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayPaySecurityCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)failWithError:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;

@end
