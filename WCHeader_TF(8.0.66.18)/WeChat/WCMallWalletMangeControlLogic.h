@class NSString, WCPayWalletGetFunctionSwitchListCgi, WCPayWalletBatchFunctionOperateCgi;
@protocol WCMallWalletMangeControlLogicDelegate;

@interface WCMallWalletMangeControlLogic : WCPayControlLogic <WCPayWalletGetFunctionSwitchListCgiDelegate, WCPayWalletBatchFunctionOperateCgiDelegate, WCPayMallFuncManageViewControllerDelegate, WCBizMainViewControllerExt> {
    id<WCMallWalletMangeControlLogicDelegate> m_delegate;
}

@property (retain, nonatomic) WCPayWalletGetFunctionSwitchListCgi *getListCgi;
@property (retain, nonatomic) WCPayWalletBatchFunctionOperateCgi *batchOperateCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setControlLogicDelegate:(id)a0;
- (void)startLogic;
- (void)onWCPayWalletGetFunctionSwitchListCgiResponseOK:(id)a0;
- (void)onWCPayWalletGetFunctionSwitchListCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnWCPayMallFuncManageViewControllerCancel;
- (BOOL)isWCPayMallFuncManagerViewControllerBePresent;
- (void)OnWCPayMallFuncManageViewControllerBatchOperate:(id)a0;
- (void)onWCPayWalletBatchFunctionOperateCgiResponseOK:(id)a0;
- (void)onWCBizMainViewControllerGetFuncDone;
- (void)onWCPayWalletBatchFunctionOperateCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void).cxx_destruct;

@end
