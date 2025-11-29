@protocol WCPayTransferPhoneGetSwitchCgiDelegate;

@interface WCPayTransferPhoneGetSwitchCgi : WCPayBaseCgi

@property (weak) id<WCPayTransferPhoneGetSwitchCgiDelegate> m_delegate;
@property BOOL fromServer;

- (id)init;
- (void)startRequest:(id)a0 delegate:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
