@protocol WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate;

@interface WCPaySetWalletEntranceBalanceSwitchStateCgi : WCPayBaseCgi

@property (weak) id<WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate> m_delegate;

- (void)startRequestWithSwitchOpen:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
