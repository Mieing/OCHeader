@protocol WABizF2FRequestPaymentCgiDelegate;

@interface WABizF2FRequestPaymentCgi : WCPayBaseCgi {
    id<WABizF2FRequestPaymentCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
