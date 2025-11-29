@protocol WCPayLQTDepositManagePlanCgiDelegate;

@interface WCPayLQTDepositManagePlanCgi : WCPayBaseCgi {
    id<WCPayLQTDepositManagePlanCgiDelegate> m_delegate;
}

- (void)startWithRequest:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
