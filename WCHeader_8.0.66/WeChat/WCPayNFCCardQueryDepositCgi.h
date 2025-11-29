@class DepositQueryDepositRequest;
@protocol WCPayNFCCardQueryDepositCgiDelegate;

@interface WCPayNFCCardQueryDepositCgi : WCPayBaseCgi

@property unsigned long long m_retryDelay;
@property unsigned long long m_maxRetryCount;
@property unsigned long long m_currentRetryCount;
@property (retain, nonatomic) DepositQueryDepositRequest *m_queryDepositReuqest;
@property (weak, nonatomic) id<WCPayNFCCardQueryDepositCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0 retryDelay:(unsigned long long)a1 maxRetryCount:(unsigned long long)a2;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
