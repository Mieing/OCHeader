@protocol WCPayLQTDepositPreAddPlanCgiDelegate;

@interface WCPayLQTDepositPreAddPlanCgi : WCPayBaseCgi {
    id<WCPayLQTDepositPreAddPlanCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)startRequestWithCache:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)cacheResponse:(id)a0;
- (void).cxx_destruct;

@end
