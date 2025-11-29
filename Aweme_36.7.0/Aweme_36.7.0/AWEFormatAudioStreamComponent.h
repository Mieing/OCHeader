@interface AWEFormatAudioStreamComponent : AWEIMComponentBase <AWEFormatAudioStreamPlayService, AWEFormatDigitalHumanInteractionModeSwitchAction, AWEIMMessageListDataAction, AWEIMMessageTypewriterAction> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioStreamApi;
    void /* unknown type, empty encoding */ jsbSubscriber;
    void /* unknown type, empty encoding */ currentPlayMsgReqID;
    void /* unknown type, empty encoding */ currentPlayAudioStreamID;
    void /* unknown type, empty encoding */ interruptedAudioSteamID;
    void /* unknown type, empty encoding */ didAudioPlayedMsgReqIds;
    void /* unknown type, empty encoding */ currentMsgTrackReqId;
    void /* unknown type, empty encoding */ audioPackageIndex;
    void /* unknown type, empty encoding */ isPlaying;
    void /* unknown type, empty encoding */ didEnterBackground;
    void /* unknown type, empty encoding */ didDisappear;
}

- (void)playAudios:(id)a0;
- (void)stopPlay;
- (void)getFormatAudioStreamWithRoomID:(id)a0 reqId:(id)a1 msgReqId:(id)a2 text:(id)a3;
- (void)interruptCurrentAudioStream;
- (void)interruptAudioStreamWithReqId:(id)a0;
- (BOOL)currentMsgDidPlayed:(id)a0;
- (void)setMsgDidPlayed:(id)a0;
- (void)digitalHumanInteractionModeDidChange:(long long)a0 to:(long long)a1;
- (void)willSendNewMessage;
- (void)didReceiveNewMessageWithMessageProtocol:(id)a0 reason:(long long)a1;
- (void)hostVC_willDealloc;
- (void)app_didEnterBackground;
- (void)app_willEnterForeground;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)imAudioWillRecordNotified;
- (void)typewriterMessageOccurException:(unsigned long long)a0 msg:(id)a1;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
