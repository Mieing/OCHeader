@class WCPayTransferMoneyControlLogic, NSString, WCPayF2FMiniProgramConfirmRcvrCgi, UIButton;

@interface WAJSEventHandler_requestFacetoFacePayment : WAJSEventHandler_BaseEvent <WCPayF2FMiniProgramConfirmRcvrCgiDelegate, WCPayF2FReceiveModalViewDelegate, WCBaseControlMgrExt>

@property (retain, nonatomic) WCPayF2FMiniProgramConfirmRcvrCgi *confirmRcvrCgi;
@property (retain, nonatomic) WCPayTransferMoneyControlLogic *transferMoneyControlLogic;
@property (retain, nonatomic) UIButton *bigBlockBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)blockAction:(id)a0;
- (void)onWCPayF2FMiniProgramConfirmRcvrCgiResponseOK:(id)a0;
- (void)onWCPayF2FMiniProgramConfirmRcvrCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onConfirmRcvrCgiFail;
- (id)kvLogStringWithActionType:(unsigned int)a0;
- (void)onWCPayF2FReceiveModalViewCancel;
- (void)onWCPayF2FReceiveModalViewClickConfirmBtn:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
