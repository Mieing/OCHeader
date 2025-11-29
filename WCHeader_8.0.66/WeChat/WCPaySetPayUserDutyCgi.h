@protocol WCPaySetPayUserDutyCgiDelegate;

@interface WCPaySetPayUserDutyCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPaySetPayUserDutyCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void).cxx_destruct;

@end
