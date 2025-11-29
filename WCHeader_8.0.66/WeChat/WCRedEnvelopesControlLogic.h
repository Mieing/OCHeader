@class NSString, WCRedEnvelopesControlData;

@interface WCRedEnvelopesControlLogic : WCBizControlLogic <WCRedEnvelopesLogicMgrExt> {
    WCRedEnvelopesControlData *m_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithData:(id)a0;
- (void)resume;
- (void)pause;
- (void)stopLogic;
- (void)startLoading;
- (void)startWCPayLoading;
- (void)stopLoading;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
- (void)onErrorAlertViewStopLogic:(id)a0;
- (void)onErrorAlertViewDismiss:(id)a0;
- (BOOL)onError:(id)a0;
- (BOOL)onNeedToControlCurrentPublicError;
- (void)OnWCRedEnvelopesBaseRequestCommonError:(id)a0 HongbaoCmdType:(long long)a1;
- (void)OnWCRedEnvelopesBaseRequestCommonSystemError:(id)a0 HongbaoCmdType:(long long)a1;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonError:(id)a0 HBCmdType:(long long)a1;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonSystemError:(id)a0 HBCmdType:(long long)a1;
- (void)OnWCRedEnvBizBaseRequestCommonError:(id)a0 HBCmdType:(long long)a1;
- (void)OnWCRedEnvBizBaseRequestCommonSystemError:(id)a0 HBCmdType:(long long)a1;
- (void).cxx_destruct;

@end
