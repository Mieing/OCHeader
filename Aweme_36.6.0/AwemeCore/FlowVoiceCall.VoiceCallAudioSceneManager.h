@interface FlowVoiceCall.VoiceCallAudioSceneManager : NSObject <FlowAVSDK.FlowAVSessionEngineListener> {
    void /* unknown type, empty encoding */ audioSceneListener;
    void /* unknown type, empty encoding */ _audioSceneResource;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ logger;
}

- (void)avSessionEngineWithDidReceiveDownlinkAudioVolume:(long long)a0;
- (void)avSessionEngineWithDidReceiveUplinkAudioVolume:(long long)a0;
- (void)avSessionEngineWithDidAudioCaptureDeviceStoped:(BOOL)a0;
- (void)avSessionEngineWithDidVideoDeviceStateChanged:(long long)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
