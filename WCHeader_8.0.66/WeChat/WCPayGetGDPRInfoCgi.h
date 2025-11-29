@protocol WCPayGetGDPRInfoCgiDelegate;

@interface WCPayGetGDPRInfoCgi : WCPayBaseTenPayCgi {
    id<WCPayGetGDPRInfoCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
