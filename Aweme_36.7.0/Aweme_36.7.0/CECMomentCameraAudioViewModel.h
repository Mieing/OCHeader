@protocol AFDMomentCameraPerformanceTrackService, AFDMomentContextService, CECMomentCameraService;

@interface CECMomentCameraAudioViewModel : AFDMomentCameraBaseViewModel

@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) BOOL isAudioRecording;

- (BOOL)handleAudioRecordPermission;
- (void)updateRecordingState:(BOOL)a0;
- (void)resetCameraConfigForAudioCameraSwitchToMode:(long long)a0 fromMode:(long long)a1 isNeedRefreshCamera:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
