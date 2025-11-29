@class NSString, WCRedEnvelopesAtmospherePagView, EmojiInfoObj, UIView, WCRedEnvelopesReceiveHomeView;

@interface WCRedEnvelopesPreviewControlLogic : WCRedEnvelopesControlLogic <IStoreEmotionSingleDownloadMgrExt, WCRedEnvelopesReceiveHomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate> {
    WCRedEnvelopesReceiveHomeView *introView;
}

@property (nonatomic) BOOL bHasStartDownloadEmoticon;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (retain, nonatomic) WCRedEnvelopesAtmospherePagView *atmospherePagView;
@property (retain, nonatomic) UIView *redEnvelopesDetailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redEnvelopesBaseInfoDict;
- (void)startLogic;
- (BOOL)shouldShowAtmospherePagView;
- (void)startDownloadEmoticonFromMsgData;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)closeIntroView;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)onOpenRedEnvelopes;
- (void)playDetailPag;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)a0;
- (BOOL)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBeginDragging;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerViewWillBePop;
- (void).cxx_destruct;

@end
