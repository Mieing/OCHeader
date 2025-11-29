@class NSString;

@interface WCRedEnvelopesHistoryListControlLogic : WCRedEnvelopesControlLogic <WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate> {
    int m_enWCRedEnvelopesHistoryType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 Scene:(int)a1;
- (void)startLogic;
- (void)requestData;
- (void)WCRedEnvelopesRedEnvelopesHistoryListViewControllerBack;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnDidSelectSendedRedEnvelopesHistoryItem:(id)a0;
- (void)OnDidSelectReceivedRedEnvelopesHistoryItem:(id)a0;
- (void)OnDeleteSendedRedEnvelopesHistoryItem:(id)a0;
- (void)OnDeleteReceivedRedEnvelopesHistoryItem:(id)a0;
- (void)OnDidSelectOtherYear:(id)a0;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)a0 Error:(id)a1;
- (void)OnChangeToScene:(int)a0;

@end
