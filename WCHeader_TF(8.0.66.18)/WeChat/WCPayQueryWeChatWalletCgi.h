@protocol WCPayQueryWeChatWalletCgiDelegate;

@interface WCPayQueryWeChatWalletCgi : WCPayBaseCgi

@property (nonatomic) BOOL m_isServerResponse;
@property (weak) id<WCPayQueryWeChatWalletCgiDelegate> m_delegate;

- (void)startRequest:(id)a0;
- (BOOL)isDcepAppInstalled;
- (id)getInstalledAppList;
- (id)getWalletLocationInfo;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (id)getLocalBalanceInfo;
- (void).cxx_destruct;

@end
