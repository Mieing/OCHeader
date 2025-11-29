@class NSDictionary, NSString;

@interface IESLiveAnchorPFMicrophoneHandler : IESLiveAnchorPFBaseHandler <LiveCoreAudioDeviceMonitorDelegate, IESLiveRoomStreamCaptureEvent>

@property (nonatomic) long long currentState;
@property (copy, nonatomic) NSDictionary *micConfig;
@property (nonatomic) BOOL screencastLivePerfOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAudioDeviceStatus:(long long)a0 isMute:(BOOL)a1 audioDb:(long long)a2 inTime:(long long)a3;
- (void)bindAction;
- (void)didStartLive;
- (void)initializeParams;
- (void)onAudioCaptureEventDidChanged:(long long)a0;
- (void)observerAudio;
- (void)compareMicrophoneStateWithOldState:(long long)a0 newState:(long long)a1;
- (BOOL)shouldAudioInputIgnoreMicrophoneState:(long long)a0;
- (long long)computeMicrophoneState:(long long)a0 isMute:(BOOL)a1 audioDb:(long long)a2 inTime:(long long)a3;
- (void)microphoneStateWillChangeFrom:(long long)a0 to:(long long)a1;
- (id)defaultMicrophoneConfig;
- (void)initializeMicrophoneState;
- (void).cxx_destruct;
- (void)didLoad;

@end
