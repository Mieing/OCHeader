@protocol WCPayTransferMsgCheckCgiDelegate;

@interface WCPayTransferMsgCheckCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayTransferMsgCheckCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0 isOpenIM:(int)a1;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
