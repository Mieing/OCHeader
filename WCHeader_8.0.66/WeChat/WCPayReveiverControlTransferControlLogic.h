@class WCPayInterceptWinLogic, NSString, InterceptWin, WCPayJumpRemindControlLogic, NSDictionary, WCPayComplianceHalfPage, WCPayUnionTransferConfirmCgi, WCPayUnionTransferQueryCgi, ContactUpdateHelper;

@interface WCPayReveiverControlTransferControlLogic : WCPayControlLogic <IWCPayControlLogicExt, IMsgRevokeExt, WCPayUnionTransferQueryCgiDelegate, WCPayUnionTransferConfirmCgiDelegate, WCPayTransferOpenMiniGuidePageSheetDelegate, MMUseCaseCallback, WCPayTransferMoneyStatusViewControllerDelegate>

@property (retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic;
@property (retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic;
@property (retain, nonatomic) InterceptWin *intercept_win_after;
@property (nonatomic) WCPayComplianceHalfPage *complianceHalfPage;
@property (nonatomic) BOOL bIsOpenIM;
@property (retain, nonatomic) WCPayUnionTransferQueryCgi *unionQueryCgi;
@property (retain, nonatomic) WCPayUnionTransferConfirmCgi *unionConfirmCgi;
@property (retain, nonatomic) NSDictionary *recvChannelSubTitleClickInfo;
@property (retain, nonatomic) ContactUpdateHelper *senderNickNameHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)OnWCPayTransferMoneyStatusViewControllerBack;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer:(id)a0 againCtx:(id)a1;
- (void)OnWCPayTransferMoneyStatusViewControllerRefresh;
- (void)OnWCPayTransferMoneyStatusViewControllerReshowOpenMinimchGuide:(id)a0;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)ToRefusedMoney;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQT;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQTWithTraceInfo:(id)a0;
- (BOOL)OnWCPayTransferMoneyStatusViewControllerBackBlock;
- (void)onWCPayTransferMoneyStatusViewControllerSetSubTitleClickInfo:(id)a0;
- (void)onWCPayUnionTransferConfirmCgiResponseOK:(id)a0;
- (void)onWCPayUnionTransferConfirmCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCPayUnionTransferQueryCgiResponseOK:(id)a0;
- (void)onWCPayUnionTransferQueryCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnCheckTransferMoneyStatus:(id)a0 Error:(id)a1;
- (void)OnConfirmTransferMoney:(id)a0 Error:(id)a1;
- (void)insertNotInGroupSystemMsg:(id)a0;
- (void)onWCPayTransferOpenMiniGuidePageSheetRefuseTransfer;
- (void)onWCPayTransferOpenMiniGuidePageSheetNeedRefresh;
- (void)onWCPayTransferOpenMiniGuidePageSheetClickLink:(id)a0;
- (void)checkMoneyStatusAfterConfirm:(id)a0;
- (void)OnRefuseTransferMoney:(id)a0 Error:(id)a1;
- (void)OnGetHistoryOrderDetailInfo:(id)a0 Error:(id)a1;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (id)getRevokeTips;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
