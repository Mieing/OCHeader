@interface VoipmpCoreUIControllerCallback : NSObject {
    struct VoipmpCoreUIControllerDispatcherBridgeObjcImpl { void /* function */ **x0; struct VoipmpCoreUIControllerDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct VoipmpCoreUIControllerDispatcherBridgeObjcImpl { void /* function */ **x0; struct VoipmpCoreUIControllerDispatcherCallback *x1; id x2; } *)a0;
- (void)onAudioRouteToComplete:(unsigned long long)a0;
- (void)onRecordUpdateToComplete:(unsigned long long)a0;
- (void)onUpdateAudioMenuComplete:(unsigned long long)a0;
- (void)onUpdateAddMemberIconComplete:(unsigned long long)a0;
- (void)onOnUpdateNetworkPoorComplete:(unsigned long long)a0;
- (void)onOnUpdateLongWaitingComplete:(unsigned long long)a0;
- (void)onOnMaxEnergyUserListUpdateToComplete:(unsigned long long)a0;
- (void)onOnSpeakerUserUpdateComplete:(unsigned long long)a0;
- (void)onOnNetWeakUserUpdateComplete:(unsigned long long)a0;
- (void)onOnTalkingInfoUpdateToComplete:(unsigned long long)a0;
- (void)onOnMemberInfoUpdateComplete:(unsigned long long)a0;
- (void)onOnRenderUIChangedComplete:(unsigned long long)a0;
- (void)onHideOpBtnComplete:(unsigned long long)a0;
- (void)onShowOpBtnComplete:(unsigned long long)a0;
- (void)onCanResponsePauseEventComplete:(unsigned long long)a0;
- (void)onOnInComingCallChangeToMainCallComplete:(unsigned long long)a0;
- (void)onOnConfEventComplete:(unsigned long long)a0;
- (void)onOnCameraUpdateToComplete:(unsigned long long)a0;
- (void)onOnRenderInfoUpdateToComplete:(unsigned long long)a0;
- (void)onCallEndComplete:(unsigned long long)a0;
- (void)onHideFullscreenComplete:(unsigned long long)a0;
- (void)onToastAddMemberFailedComplete:(unsigned long long)a0;
- (void)onToastMultiPathUseComplete:(unsigned long long)a0;
- (void)onToastMemberJoinTalkingComplete:(unsigned long long)a0;
- (void)onCancelInComingNotifyComplete:(unsigned long long)a0;
- (void)onShowRejectFloatCardComplete:(unsigned long long)a0;
- (void)onShowTalkingUnSafeComplete:(unsigned long long)a0;
- (void)onShowFinishCallFloatCardComplete:(unsigned long long)a0;
- (void)onShowNotFriendComplete:(unsigned long long)a0;
- (void)onLaunchPageComplete:(unsigned long long)a0;
- (void)onLaunchInComingCardComplete:(unsigned long long)a0;
- (void)onHideFloatCardComplete:(unsigned long long)a0;
- (void)onHideInComingCardComplete:(unsigned long long)a0;
- (void)onLaunchFloatPageComplete:(unsigned long long)a0 ret:(BOOL)a1;
- (void)onLaunchContractPageComplete:(unsigned long long)a0;
- (void)onLaunchRingtoneHalfDialogComplete:(unsigned long long)a0;
- (void)onHideRingtoneHalfDialogComplete:(unsigned long long)a0;
- (void)onUpdateBannerInfoComplete:(unsigned long long)a0;
- (void)onAcceptToWaitingComplete:(unsigned long long)a0;

@end
