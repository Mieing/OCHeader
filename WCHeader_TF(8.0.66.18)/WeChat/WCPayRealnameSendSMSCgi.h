@protocol WCPayRealnameSendSMSCgiDelegate;

@interface WCPayRealnameSendSMSCgi : WCPayBaseCgi

@property (weak) id<WCPayRealnameSendSMSCgiDelegate> m_delegate;

- (id)init;
- (void)startRequest:(id)a0 delegate:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
