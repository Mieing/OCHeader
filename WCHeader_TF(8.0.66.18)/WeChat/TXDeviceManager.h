@interface TXDeviceManager : NSObject {
    struct weak_ptr<liteav::manager::DeviceManagerInterface> { struct DeviceManagerInterface *__ptr_; struct __shared_weak_count *__cntrl_; } deviceManager_;
}

@property (copy, nonatomic) id /* block */ micTestBlock;
@property (copy, nonatomic) id /* block */ speakerTestBlock;

- (void)setInternelDeviceManager:(struct weak_ptr<liteav::manager::DeviceManagerInterface> { struct DeviceManagerInterface *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)isFrontCamera;
- (long long)switchCamera:(BOOL)a0;
- (BOOL)isCameraZoomSupported;
- (double)getCameraZoomMaxRatio;
- (long long)setCameraZoomRatio:(double)a0;
- (BOOL)isAutoFocusEnabled;
- (long long)enableCameraAutoFocus:(BOOL)a0;
- (long long)setCameraFocusPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isCameraTorchSupported;
- (long long)enableCameraTorch:(BOOL)a0;
- (long long)setAudioRoute:(long long)a0;
- (long long)setSystemVolumeType:(long long)a0;
- (long long)setExposureCompensation:(double)a0;
- (void)setCameraCapturerParam:(id)a0;
- (void)onTestMicVolume:(unsigned int)a0;
- (void)onTestSpeakerVolume:(unsigned int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
