@protocol WCPayTransferPhonePlaceOrderCgiDelegate;

@interface WCPayTransferPhonePlaceOrderCgi : WCPayBaseCgi

@property (weak) id<WCPayTransferPhonePlaceOrderCgiDelegate> m_delegate;

- (id)init;
- (void)startRequest:(id)a0 delegate:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
