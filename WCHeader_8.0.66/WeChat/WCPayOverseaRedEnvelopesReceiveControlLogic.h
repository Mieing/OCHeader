@class WCPayInterceptWinLogic, ForeignHbOpenResp, WCPayOverseaRedEnvelopesReceiveCgi, WCPayOverseaRedEnvelopesDetailCgi, NSString, WCPayOverseaRedEnvelopesOpenCgi, WCPayJumpRemindControlLogic, ForeignHbDetailResp, WCRedEnvelopesReceiveHomeView, ForeignHbReceiveResp;

@interface WCPayOverseaRedEnvelopesReceiveControlLogic : WCRedEnvelopesControlLogic <WCPayOverseaRedEnvelopesReceiveCgiDelegate, WCPayOverseaRedEnvelopesOpenCgiDelegate, WCPayOverseaRedEnvelopesDetailCgiDelegate, WCRedEnvelopesReceiveHomeViewDelegate> {
    int m_scene;
}

@property (retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic;
@property (retain, nonatomic) WCPayOverseaRedEnvelopesReceiveCgi *receiveCgi;
@property (retain, nonatomic) WCPayOverseaRedEnvelopesOpenCgi *openCgi;
@property (retain, nonatomic) WCPayOverseaRedEnvelopesDetailCgi *detailCgi;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeView *introView;
@property (retain, nonatomic) ForeignHbReceiveResp *receiveResp;
@property (retain, nonatomic) ForeignHbOpenResp *openResp;
@property (retain, nonatomic) ForeignHbDetailResp *detailResp;
@property (retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 Scene:(int)a1;
- (void)stopLoading;
- (void)startLogic;
- (id)genReceiveRequest;
- (id)genOpenRequest;
- (id)genDetailRequestWithLimit:(unsigned long long)a0 offSet:(unsigned long long)a1;
- (id)genKeyValueFromUrlParam:(id)a0;
- (void)onWCPayOverseaRedEnvelopesReceiveOK:(id)a0;
- (void)onWCPayOverseaRedEnvelopesReceiveError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCPayOverseaRedEnvelopesOpenOK:(id)a0;
- (void)onWCPayOverseaRedEnvelopesOpenError:(id)a0 errorDesc:(id)a1 errorCode:(unsigned int)a2;
- (void)onWCPayOverseaRedEnvelopesDetailOK:(id)a0;
- (void)onWCPayOverseaRedEnvelopesDetailError:(id)a0 errorCode:(unsigned int)a1;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)a0;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnCommitWCRedEnvelopes:(id)a0;
- (void)OnGoToBalanceDetail;
- (void)OnGoToLqtDetail;
- (void)OnGoToLqtDetail:(id)a0;
- (void)OnGotoLqtSave:(id)a0 operateId:(id)a1;
- (void).cxx_destruct;

@end
