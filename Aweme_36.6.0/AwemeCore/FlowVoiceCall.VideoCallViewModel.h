@interface FlowVoiceCall.VideoCallViewModel : NSObject <FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ enterType;
    void /* unknown type, empty encoding */ videoState;
    void /* unknown type, empty encoding */ videoStatus;
    void /* unknown type, empty encoding */ isCameraBack;
    void /* unknown type, empty encoding */ downgradeTitle;
    void /* unknown type, empty encoding */ isMute;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ currentSpeakDuration;
}

- (void)conversationContextDidClear:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
