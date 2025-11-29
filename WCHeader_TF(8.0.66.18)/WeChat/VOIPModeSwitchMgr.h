@class NSString, VOIPModeSwitchStateMachine;

@interface VOIPModeSwitchMgr : MMUserService <IVOIPSyncExt, MMServiceProtocol> {
    BOOL mIsWeakSessionActive;
    BOOL mIsSessionActive;
    BOOL mIsLocalVideoClosed;
    BOOL mIsRemoteVideoClosed;
    BOOL mIsMicClosed;
    BOOL mIsVoiceMode;
    BOOL mIsTalkingWithOldVersion;
    unsigned long long mRoomId;
    long long mRoomKey;
}

@property (retain, nonatomic) VOIPModeSwitchStateMachine *mStateMachine;
@property (nonatomic) BOOL m_isActiveByCaller;
@property (nonatomic) BOOL m_isInitialVoiceMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)OnGotRemoteControlStatus:(unsigned int)a0;
- (void)PushControlStatusToRemote:(unsigned int)a0;
- (void)SetAudioSpeakerPhone:(BOOL)a0;
- (void)CallBackForModeStatus:(unsigned long long)a0;
- (void)SetLocalVideoEnable:(BOOL)a0 shouldSendRUDP:(BOOL)a1;
- (void)SetRemoteVideoEnable:(BOOL)a0;
- (id)init;
- (void)StartWeakSessionWithRoomId:(unsigned long long)a0 andRoomKey:(long long)a1;
- (void)StartSessionWithRoomId:(unsigned long long)a0 andRoomKey:(long long)a1;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (void)VideoSwitchToVoiceMode;
- (void)VideoStatusChange:(BOOL)a0 update:(BOOL)a1 notify:(BOOL)a2;
- (void)OpenLocalEarModeNotPush;
- (void)OpenLocalEarMode;
- (void)StopSession;
- (BOOL)isLocalVideoClosed;
- (BOOL)isRemoteVideoClosed;
- (unsigned long long)CurrentStatus;
- (BOOL)isTalkingWithOldVersion;
- (BOOL)isVoiceMode;
- (void)ChangeToAudioMode;
- (void).cxx_destruct;

@end
