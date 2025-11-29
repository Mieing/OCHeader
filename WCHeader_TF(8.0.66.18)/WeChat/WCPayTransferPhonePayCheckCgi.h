@protocol WCPayTransferPhonePayCheckCgiDelegate;

@interface WCPayTransferPhonePayCheckCgi : WCPayBaseCgi

@property (weak) id<WCPayTransferPhonePayCheckCgiDelegate> m_delegate;

- (id)init;
- (void)startRequest:(id)a0 delegate:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
