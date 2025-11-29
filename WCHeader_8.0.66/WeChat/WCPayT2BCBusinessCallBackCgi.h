@protocol WCPayT2BCBusinessCallBackCgiDelegate;

@interface WCPayT2BCBusinessCallBackCgi : WCPayBaseCgi {
    id<WCPayT2BCBusinessCallBackCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
