@protocol WCPayT2BCGetBankListCgiDelegate;

@interface WCPayT2BCGetBankListCgi : WCPayBaseCgi {
    id<WCPayT2BCGetBankListCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
