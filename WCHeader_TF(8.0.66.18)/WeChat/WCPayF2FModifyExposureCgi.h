@protocol WCPayF2FModifyExposureCgiDelegate;

@interface WCPayF2FModifyExposureCgi : WCPayBaseCgi {
    id<WCPayF2FModifyExposureCgiDelegate> m_delegate;
}

- (void)startRequest:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
