@class NSString;

@interface VoIPEventLogService : MMUserService <VoipUIManagerExt, IVOIPExt, VoIPMessageMgrExt, IVOIPUILogicMgrExt, IVOIPModeSwitchExt, WCAudioSessionExt, CNetworkStatusExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)OnCall:(id)a0 ErrNo:(int)a1;
- (void)OnAccept:(id)a0 ErrNo:(int)a1;
- (void)OnNoAnswer:(id)a0;
- (void)OnBeAccepted:(id)a0;
- (void)OnPreConnect:(id)a0;
- (void)OnBeRejected:(id)a0;
- (void)OnBeHanguped:(id)a0;
- (void)OnHangup:(id)a0;
- (void)OnCacnel:(id)a0 withType:(int)a1;
- (void)OnBeginTalk:(id)a0;
- (void)OnTimeOut:(id)a0;
- (void)OnError:(id)a0 ErrNo:(int)a1;
- (void)OnSyncError:(id)a0 ErrNo:(int)a1;
- (void)OnTalkBrokenError:(id)a0 ErrNo:(int)a1;
- (void)OnLightInterrupt:(BOOL)a0;
- (void)OnCallInterrupt:(id)a0;
- (void)OnAutoHangUp:(id)a0;
- (void)OnCallBanned:(id)a0 errNo:(int)a1 errMsg:(id)a2;
- (void)OnCallOverLoad:(id)a0 errNo:(int)a1 errMsg:(id)a2;
- (void)OnStopPlaySound;
- (void)OnMicStartFailed;
- (void)OnMicRMSCheckBad;
- (void)onOtherDeviceHandleTalk:(id)a0 WithStatus:(unsigned int)a1;
- (void)onVoIPExtLocalCaptureSuspend;
- (void)onVoIPExtLocalCaptureResume;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onVoIPExtSetupVirtualBackgroundWithEnable:(BOOL)a0 isFront:(BOOL)a1;
- (void)onVoIPExtFlipCamera;
- (void)onVoIPExtSetupMicroPhoneWithIsMuted:(BOOL)a0;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVoIPExtRemoteTerminate;
- (void)onVoIPMessageMgrRejectCallBecasueOfSimucallingByCallerWithRoomID:(unsigned long long)a0 roomKey:(long long)a1;
- (void)onVoIPMessageMgrRejectCallBecasueOfSimucallingByCalleeWithRoomID:(unsigned long long)a0 roomKey:(long long)a1;
- (void)onVoIPMessageMgrRejectCallBecasueOfPhoneCallingWithRoomID:(unsigned long long)a0 roomKey:(long long)a1;
- (void)onVoipMinimized;
- (void)onVoipMaximized;
- (void)OnVideoModeChangeToVoiceMode;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onSimCardNetTypeChange;

@end
