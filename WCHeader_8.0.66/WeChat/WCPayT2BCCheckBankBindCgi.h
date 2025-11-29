@protocol WCPayT2BCCheckBankBindCgiDelegate;

@interface WCPayT2BCCheckBankBindCgi : WCPayBaseCgi {
    id<WCPayT2BCCheckBankBindCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
