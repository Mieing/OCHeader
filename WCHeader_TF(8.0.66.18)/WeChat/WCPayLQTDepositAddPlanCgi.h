@protocol WCPayLQTDepositAddPlanCgiDelegate;

@interface WCPayLQTDepositAddPlanCgi : WCPayBaseCgi {
    id<WCPayLQTDepositAddPlanCgiDelegate> m_delegate;
}

- (void)startWithRequest:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
