@class NSString, NSMutableDictionary, WCRedEnvelopes2019GreetingViewController, WCPayInterceptWinLogic;

@interface WCRedEnvelopesGreetingReceiveControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopes2019GreetingViewControllerDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate> {
    int m_scene;
    BOOL m_bDidStopCoinAnimation;
    BOOL m_bDidCompleteOpen;
    WCRedEnvelopes2019GreetingViewController *senderView;
    WCRedEnvelopes2019GreetingViewController *receiveView;
    BOOL m_pictureSwitch;
    BOOL m_showEmoticonSwitch;
    BOOL _isViewAnimationing;
}

@property (retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic;
@property (retain, nonatomic) NSMutableDictionary *cacheReceiveDict;
@property (retain, nonatomic) NSString *reportSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithData:(id)a0 Scene:(int)a1;
- (void)stopLoading;
- (void)startLogic;
- (void)stopLogic;
- (BOOL)isRedEnvelopesHasBeenReceivedAndNotOutOfDate:(id)a0;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnCommitWCRedEnvelopes:(id)a0;
- (void)onGoToBalanceDetail;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (void)OnSelectSessionReturn:(id)a0;
- (void)OnSelectMutilContactsButton;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)a0;
- (void)OnGenGreetingDownloadResult:(id)a0;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)a0 Error:(id)a1;
- (void)OnOpenRedEnvelopesRequest:(id)a0 Error:(id)a1;
- (void)OnQueryRedEnvelopesDetailRequest:(id)a0 Error:(id)a1;
- (void)showReceiveView:(BOOL)a0 NoShowIcon:(BOOL)a1;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)a0 Error:(id)a1;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)a0 Error:(id)a1;
- (void)OnThanksForRedEnvelopesRequest:(id)a0 Error:(id)a1;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (void)OnSendShareRedEnvelopesoRequest:(id)a0 Error:(id)a1;
- (void)WCRedEnvelopesGreetingReceiveViewBack;
- (id)WCRedEnvelopesGreetingReceiveViewGetData;
- (void)redEnvelopes2019GreetingViewControllerBack;
- (void)genGreeetingReportSessonId;
- (id)getGreetingReportSessionId;
- (void)WCRedEnvelopesGreetingSenderHomeViewBack;
- (void)onRealnameActionClick:(id)a0;
- (void)onOpenDetailList;
- (void).cxx_destruct;

@end
