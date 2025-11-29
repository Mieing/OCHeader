@class NSString, WCPayUnionTransferQueryCgi;

@interface WCPaySenderControlTransferControlLogic : WCPayControlLogic <WCPayRetrySendTransferMessageLogicDelegate, IMsgRevokeExt, WCPayUnionTransferQueryCgiDelegate, WCPayTransferMoneyStatusViewControllerDelegate>

@property (nonatomic) BOOL bIsOpenIM;
@property (retain, nonatomic) WCPayUnionTransferQueryCgi *unionQueryCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)OnWCPayTransferMoneyStatusViewControllerBack;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerRefresh;
- (void)OnWCPayTransferMoneyStatusViewControllerReshowOpenMinimchGuide:(id)a0;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)onRetrySendTransferMsgSucc;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQT;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQTWithTraceInfo:(id)a0;
- (void)onWCPayUnionTransferQueryCgiResponseOK:(id)a0;
- (void)onWCPayUnionTransferQueryCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnCheckTransferMoneyStatus:(id)a0 Error:(id)a1;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (id)getRevokeTips;
- (void).cxx_destruct;

@end
