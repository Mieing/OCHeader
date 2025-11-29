@interface FlowVoiceCall.RealtimeCallLiveActivityService : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _liveActivityProvider;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isMicrophoneHidden;
}

- (void)didMutedCall:(id)a0;
- (void)didUnmutedCall:(id)a0;
- (void)didEndCall:(id)a0;

@end
