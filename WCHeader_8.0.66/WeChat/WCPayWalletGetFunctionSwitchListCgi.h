@protocol WCPayWalletGetFunctionSwitchListCgiDelegate;

@interface WCPayWalletGetFunctionSwitchListCgi : WCPayBaseCgi {
    id<WCPayWalletGetFunctionSwitchListCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
