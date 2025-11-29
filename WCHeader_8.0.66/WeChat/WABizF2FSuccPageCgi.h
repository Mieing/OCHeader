@protocol WABizF2FSuccPageCgiDelegate;

@interface WABizF2FSuccPageCgi : WCPayBaseCgi {
    id<WABizF2FSuccPageCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
