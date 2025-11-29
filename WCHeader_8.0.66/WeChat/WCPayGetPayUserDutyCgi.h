@protocol WCPayGetPayUserDutyCgiDelegate;

@interface WCPayGetPayUserDutyCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayGetPayUserDutyCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
