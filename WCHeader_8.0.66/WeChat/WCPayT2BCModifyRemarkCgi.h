@protocol WCPayT2BCModifyRemarkCgiDelegate;

@interface WCPayT2BCModifyRemarkCgi : WCPayBaseCgi {
    id<WCPayT2BCModifyRemarkCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
