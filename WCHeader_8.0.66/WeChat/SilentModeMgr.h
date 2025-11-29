@class NSString, MMNotificationViewController;

@interface SilentModeMgr : MMUserService <SystemVolumeExt, ElderModeExt, MMNotificationViewControllerDelegate, WCAudioSessionExt, MMServiceProtocol>

@property (retain, nonatomic) MMNotificationViewController *tipsController;
@property (nonatomic) BOOL allowPlaySoundTemporary;
@property (nonatomic) double restoreVolume;
@property (nonatomic) BOOL isUsingEarPhone;
@property (readonly, nonatomic, getter=isOn) BOOL on;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onBecomeActive;
- (void)onWillResignActive;
- (void)reloadSilentLogic:(BOOL)a0;
- (BOOL)shouldSilentWhenLeaveOrEnterApp;
- (void)onTouchUpVolumeButton:(double)a0;
- (void)onTouchDownVolumeButton:(double)a0;
- (void)showTipsView;
- (void)reportVolumeChangeTo0:(int)a0;
- (void)notificationViewDidDisappear:(id)a0;
- (void)onSetElderModeOn:(BOOL)a0 success:(BOOL)a1;
- (void)onSetSilentModeOn:(BOOL)a0 success:(BOOL)a1;
- (void)onSystemVolumeChangeFrom:(float)a0 to:(float)a1 reason:(int)a2;
- (void)onWCAudioSessionRouteChange:(id)a0 reasonValue:(unsigned long long)a1;
- (void).cxx_destruct;

@end
