@class WCPayFaceHBGetView, NSString, WCPayInterceptWinLogic, MMUIViewController, UIWindow, WCRedEnvelopesRedEnvelopesDetailViewController, WCPayFaceHBCgi, WCPayComplianceHalfPage, WCPayFaceHBItem, WCRedEnvelopesControlData, WCPayFaceHBScanQRCodeHandler;
@protocol WCPayFaceHBGetLogicDelegate;

@interface WCPayFaceHBGetLogic : WCPayControlLogic <WCActionSheetDelegate, WCPayFaceHBGetViewDelegate, WCPayFaceHBCgiDelegate, IWCPayFaceHBMgrExt, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, IUiUtilExt> {
    id<WCPayFaceHBGetLogicDelegate> m_delegate;
    WCPayFaceHBItem *m_hbItem;
    WCPayFaceHBGetView *m_view;
    NSString *m_nsCurrentUserName;
    UIWindow *m_window;
    WCPayFaceHBCgi *m_faceHBOpenCGI;
    WCRedEnvelopesControlData *m_redData;
    MMUIViewController *preVC;
    WCPayFaceHBScanQRCodeHandler *QRCodeHandle;
    WCRedEnvelopesRedEnvelopesDetailViewController *m_currentViewController;
}

@property (retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic;
@property (retain, nonatomic) NSString *currentQrcode;
@property (nonatomic) WCPayComplianceHalfPage *complianceHalfPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadViews;
- (void)setDelegate:(id)a0;
- (void)setQRCode:(id)a0;
- (void)doFaceHBOpenCgi:(id)a0 leftButtonContinue:(id)a1;
- (void)setPreViewController:(id)a0;
- (void)setQRCodeHandle:(id)a0;
- (void)showHBGetView;
- (void)startLogic;
- (void)stopLogic;
- (void)OnFaceHBGetLogicCancel;
- (void)onFailMsgAndStopLogic:(id)a0;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Present:(BOOL)a2 Animation:(BOOL)a3;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (BOOL)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)a0;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnFaceHBGetCancel;
- (void)OnFaceHBGetOpenHB:(id)a0;
- (void)didWCPayFaceHBCgi:(id)a0 Response:(id)a1 Error:(id)a2 Key:(id)a3;
- (void)onOpenFaceHB:(id)a0 Error:(id)a1;
- (void)onMainWindowFrameChanged;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)a0;
- (void).cxx_destruct;

@end
