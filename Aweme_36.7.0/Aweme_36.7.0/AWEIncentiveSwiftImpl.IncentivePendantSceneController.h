@interface AWEIncentiveSwiftImpl.IncentivePendantSceneController : NSObject <AWEIncentiveTaskPageMessage, AWEIncentivePlayerMessage, AWEDigitalWellbeingMessage, AWEBasicModeMessage, AWELiteUGSPTimeMessage, AWEAppAwemeSettingMessage> {
    void /* unknown type, empty encoding */ liveBlockJsonString;
    void /* unknown type, empty encoding */ liveBlockArray;
    void /* unknown type, empty encoding */ shouldBlockDOUYINPendant;
    void /* unknown type, empty encoding */ nextSceneWillBeFeed;
    void /* unknown type, empty encoding */ feedSwitchTabFixLoginBugStableSwitch;
    void /* unknown type, empty encoding */ availableScenes;
    void /* unknown type, empty encoding */ currentAwemeModel;
    void /* unknown type, empty encoding */ _valid;
    void /* unknown type, empty encoding */ invalidBusiness;
    void /* unknown type, empty encoding */ manualPauseTimer;
    void /* unknown type, empty encoding */ currentScene;
    void /* unknown type, empty encoding */ currentSubScene;
    void /* unknown type, empty encoding */ currentOriginSubScene;
    void /* unknown type, empty encoding */ inPlayletInternal;
    void /* unknown type, empty encoding */ currentFeedCellIndex;
    void /* unknown type, empty encoding */ _sceneSafeZoneMinimumOffset;
    void /* unknown type, empty encoding */ _sceneOffset;
    void /* unknown type, empty encoding */ _leftSafeZoneMaximum;
    void /* unknown type, empty encoding */ _rightSafeZoneMaximum;
}

- (void)willOpenIncentiveTaskPage;
- (void)didEnterIncentiveTaskPage;
- (void)didCloseIncentiveTaskPage;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1 context:(id)a2;
- (void)playletTransitionFinishedWithNotification:(id)a0;
- (void)awemeSettingDidChange;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)spTimeDidChanged:(unsigned long long)a0 byMode:(unsigned long long)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)handleFeedContainerDidSwitchTabWithNotification:(id)a0;
- (void)handleCurrentAwemeChangedWithNoti:(id)a0;
- (void)handleFollowTabSkyLightShowWithNoti:(id)a0;
- (void)handleFollowTabSkyLightHideWithNoti:(id)a0;
- (void)handleTabbarDidSwitchTabWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
