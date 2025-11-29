@protocol WCPayF2FPaySucPageCgiDelegate;

@interface WCPayF2FPaySucPageCgi : WCPayBaseCgi {
    id<WCPayF2FPaySucPageCgiDelegate> m_delegate;
}

- (void)startRequest:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
