@protocol WCPayT2BCPayRequestCgiDelegate;

@interface WCPayT2BCPayRequestCgi : WCPayBaseCgi {
    id<WCPayT2BCPayRequestCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
