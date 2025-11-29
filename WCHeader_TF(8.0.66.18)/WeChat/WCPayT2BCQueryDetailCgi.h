@protocol WCPayT2BCQueryDetailCgiDelegate;

@interface WCPayT2BCQueryDetailCgi : WCPayBaseCgi {
    id<WCPayT2BCQueryDetailCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
