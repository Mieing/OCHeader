@protocol WABizF2FPlaceOrderCgiDelegate;

@interface WABizF2FPlaceOrderCgi : WCPayBaseCgi {
    id<WABizF2FPlaceOrderCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
