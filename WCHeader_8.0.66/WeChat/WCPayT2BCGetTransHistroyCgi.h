@protocol WCPayT2BCGetTransHistroyCgiDelegate;

@interface WCPayT2BCGetTransHistroyCgi : WCPayBaseCgi {
    id<WCPayT2BCGetTransHistroyCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
