@class NSString, MMUIViewController, ServiceAuthViewController, NSMutableDictionary;

@interface ServiceAuthMgr : MMUserService <ServiceAuthDelegate, ServiceAuthTaskDelegate, MMServiceProtocol> {
    ServiceAuthViewController *m_authController;
    NSMutableDictionary *m_runningTasks;
}

@property (weak, nonatomic) MMUIViewController *loadingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)showAuthViewWithConfig:(id)a0 delegate:(id)a1;
- (void)showAuthViewWithConfig:(id)a0 delegateBlockWrapper:(id)a1;
- (BOOL)isServiceOpened:(unsigned long long)a0;
- (void)requestWithConfig:(id)a0;
- (void)onTaskSuccess:(id)a0;
- (void)onTaskFail:(id)a0 error:(id)a1;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (void)_stopLoadingForSuccess;
- (void)_stopLoadingForFail;
- (void)_saveStatusAuth:(id)a0 noAuth:(id)a1;
- (void)_notifyChange:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
