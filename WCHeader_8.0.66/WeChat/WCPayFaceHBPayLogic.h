@class WCPayFaceHBQRCodeInfo, NSString, WCPayFaceHBCgi, WCPayFaceHBManagementLogic, WCPayFaceHBPayView;
@protocol WCPayFaceHBPayLogicDelegate;

@interface WCPayFaceHBPayLogic : WCPayControlLogic <WCActionSheetDelegate, WCPayFaceHBPayViewDelegate, WCPayFaceHBCgiDelegate, IMsgExt, IWCPayFaceHBMgrExt, WCPayFaceHBManagementLogicDelegate, WCRedEnvelopesLogicMgrExt> {
    id<WCPayFaceHBPayLogicDelegate> m_delegate;
    WCPayFaceHBPayView *m_view;
    WCPayFaceHBManagementLogic *m_faceHBManagementLogic;
    WCPayFaceHBCgi *m_getQRCodeCgi;
    WCPayFaceHBCgi *m_deleteQRCodeHBCgi;
    WCPayFaceHBQRCodeInfo *m_qrInfo;
    BOOL m_bFirstQueryDetail;
    NSString *clearTips;
    NSString *clearActionTips;
    unsigned int enterCount;
    unsigned int captureCount;
    unsigned int normalSlideCount;
    unsigned int normalSelectCount;
    unsigned int caidanSlideCount;
    unsigned int caidanSelectCount;
}

@property (retain, nonatomic) WCPayFaceHBCgi *invalidataUrlCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (void)onManage;
- (void)showPayHBView;
- (void)startLogic;
- (void)stopLogic;
- (void)getDetailReceivers;
- (void)getQRCodeInfo;
- (void)updateQRCode;
- (void)onFailMsgAndStopLogic:(id)a0;
- (void)onFailMsg:(id)a0;
- (void)OnFaceHBPayLogicCancel;
- (void)OnFaceHBPayCancel;
- (void)OnFaceHBPayManage;
- (void)OnFaceHBMyRedEnvelopesList;
- (void)OnFaceHBDeleteHB;
- (void)OnFaceHBViewDetail;
- (void)OnFaceHBViewHistory;
- (void)OnLoadMoreRedEnvelopesList;
- (id)loadActionSheetTip;
- (void)OnCaptureScreen;
- (void)onUserstartScreenCapture;
- (void)onUserEndScreenCapture;
- (void)sendInvalidateUrlRequest;
- (void)OnHBSlide:(unsigned int)a0 select:(unsigned int)a1 Type:(unsigned int)a2;
- (void)OnFaceHBManagementCancel;
- (void)OnFaceHBManagementSearch:(id)a0;
- (void)someoneOpen:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 SendID:(id)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onGetQRCodeInfo:(id)a0 Error:(id)a1;
- (void)onClearQRCodeInfo:(id)a0 Error:(id)a1;
- (void)onGetInvalidateUrlResp:(id)a0 Error:(id)a1;
- (void)didWCPayFaceHBCgi:(id)a0 Response:(id)a1 Error:(id)a2 Key:(id)a3;
- (void)OnQueryRedEnvelopesDetailRequest:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
