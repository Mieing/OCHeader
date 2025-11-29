@interface FlowKit.MessagingReaderComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMConnectionServiceReceiver, FlowIMX.FlowIMChatServiceDelegate> {
    void /* unknown type, empty encoding */ _ttsPlayComponent;
    void /* unknown type, empty encoding */ _ttsToggleComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _isContainerInvisible;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _voiceCallProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableNeedTTSPlayFix;
    void /* unknown type, empty encoding */ messageReader;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ asrWaitReplyEndedMessages;
    void /* unknown type, empty encoding */ replayNeedTTSPlayMessages;
    void /* unknown type, empty encoding */ initLastReadIndex;
    void /* unknown type, empty encoding */ needTTSHolder;
    void /* unknown type, empty encoding */ hasActivedTTSHolder;
    void /* unknown type, empty encoding */ ttsEnableWhenSendMsg;
    void /* unknown type, empty encoding */ currentMessageReaderStatus;
    void /* unknown type, empty encoding */ streamingMessageID;
    void /* unknown type, empty encoding */ receivedTextMessageIDs;
    void /* unknown type, empty encoding */ repliedLocalMessageIDs;
}

- (void)onMessageReceivedWithMessage:(id)a0;
- (void)onReceiveStopLoadingWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillEnterForeground;
- (void)dealloc;

@end
