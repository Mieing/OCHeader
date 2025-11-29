@interface WeChat.VoIPLCKManager : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ haveAProcessingCall;
    void /* unknown type, empty encoding */ currentUUID;
    void /* unknown type, empty encoding */ haveAcceptedCall;
    void /* unknown type, empty encoding */ isBackground;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ update;
    void /* unknown type, empty encoding */ roomID;
    void /* unknown type, empty encoding */ roomKey;
    void /* unknown type, empty encoding */ isVideo;
    void /* unknown type, empty encoding */ hasActiveAudio;
    void /* unknown type, empty encoding */ noActionAfterEnteringForeground;
    void /* unknown type, empty encoding */ needEndCallByFailure;
    void /* unknown type, empty encoding */ user;
    void /* unknown type, empty encoding */ isilink;
    void /* unknown type, empty encoding */ hasJoined;
    void /* unknown type, empty encoding */ isEnding;
    void /* unknown type, empty encoding */ isMute;
    void /* unknown type, empty encoding */ isMultiply;
    void /* unknown type, empty encoding */ acceptedCalled;
}

- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (BOOL)getIsVideo;
- (BOOL)getIsMultiTalk;
- (void)onServiceEnterBackground;
- (void)resetStatus;
- (void)resetStatus2WithRoomID:(unsigned long long)a0;
- (id)getUUID;
- (id)getUserName;
- (void)joinCallOutside2WithRoomID:(unsigned long long)a0;
- (void)forceEnd;
- (void)forceClose;
- (void)endCallOutsideWithRoomID:(unsigned long long)a0 isCancel:(BOOL)a1;
- (BOOL)getIfProcessingCall;
- (unsigned long long)getRoomID;
- (BOOL)haveAnsweredCall;
- (void)receiveCallWithUserName:(id)a0 roomID:(unsigned long long)a1 roomKey:(unsigned long long)a2 isVideo:(BOOL)a3 isPushKit:(BOOL)a4 ring:(id)a5 displayName:(id)a6 isilink:(BOOL)a7 isMultiply:(BOOL)a8 completion:(id /* block */)a9;
- (id)init;
- (void).cxx_destruct;

@end
