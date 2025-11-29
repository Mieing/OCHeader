@class NSString, MMUIViewController, MMLimitedModeVerifyPasswordUtilLogic;

@interface MMLimitedModeExternalUtilMgr : MMUserService <MMLimitedModeVerifyPasswordUtilLogicDelegate, MMServiceProtocol> {
    MMLimitedModeVerifyPasswordUtilLogic *m_verifyPasswordUtilLogic;
    unsigned int m_scene;
}

@property (weak, nonatomic) MMUIViewController *sourceViewController;
@property (copy, nonatomic) id /* block */ verifyPasswordOrSetSuccessBlock;
@property (copy, nonatomic) id /* block */ verifyPasswordOrSetFailBlock;
@property (copy, nonatomic) id /* block */ settingEnterVcBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL needPresentVc;
@property (nonatomic) BOOL forceDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCheckLimitedModeVerifyPasswordOrGoToSet:(id)a0 scene:(unsigned int)a1 successBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)startCheckLimitedModeVerifyPasswordOrGoToSet:(id)a0 scene:(unsigned int)a1 verifyPasswordSuccessBlock:(id /* block */)a2 verifyPasswordFailBlock:(id /* block */)a3 settingLiemitedModeEntryVcBlock:(id /* block */)a4 completionBlock:(id /* block */)a5 needPresentVc:(BOOL)a6 forceDisplay:(BOOL)a7;
- (void)doCheckLimitedModeVerifyPasswordOrGoToSet;
- (void)resetVerifyPasswordUtilLogic;
- (void)onVerifyPasswordSuccessTicket:(id)a0;
- (void)onGoToSetLimitedModeViewControllerSuccess;
- (void)onGoToSetLimitedModeViewControllerFailed;
- (BOOL)needVcPresent;
- (void)settingLimitedModeEntryViewController:(id)a0;
- (void).cxx_destruct;

@end
