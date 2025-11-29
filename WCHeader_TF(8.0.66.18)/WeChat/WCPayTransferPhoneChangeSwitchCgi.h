@protocol WCPayTransferPhoneChangeSwitchCgiDelegate;

@interface WCPayTransferPhoneChangeSwitchCgi : WCPayBaseCgi

@property (weak) id<WCPayTransferPhoneChangeSwitchCgiDelegate> m_delegate;

- (id)init;
- (void)startRequest:(id)a0 delegate:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
