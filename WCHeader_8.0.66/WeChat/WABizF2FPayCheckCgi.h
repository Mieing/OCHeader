@protocol WABizF2FPayCheckCgiDelegate;

@interface WABizF2FPayCheckCgi : WCPayBaseCgi {
    id<WABizF2FPayCheckCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
