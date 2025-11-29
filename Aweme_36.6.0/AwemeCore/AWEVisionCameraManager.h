@protocol ACCCameraScanEvent, VERecorderPublicProtocol;

@interface AWEVisionCameraManager : NSObject

@property (nonatomic) double zoomFactor;
@property (nonatomic) double maxZoomFactor;
@property (nonatomic) double minZoomFactor;
@property (nonatomic) BOOL supprotZoom;
@property (nonatomic) BOOL enableMultiZoomCapability;
@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) BOOL scanManualOperationZoomFactor;
@property (weak, nonatomic) id<ACCCameraScanEvent> delegate;
@property (weak, nonatomic) id<ACCCameraScanEvent> globalDelegate;

- (void)turnScan:(BOOL)a0 param:(id)a1 completeResult:(id /* block */)a2;
- (void)animationChangeToZoomFactor:(double)a0;
- (BOOL)currentInVirtualCameraMode;
- (void)scanQrcodeChangeToZoomFactor:(double)a0 byUser:(BOOL)a1;
- (BOOL)isCameraCapabilitySupportedZoom;
- (BOOL)enableZoomOpt;
- (void)setScanAnythingEnable:(BOOL)a0 param:(id)a1;
- (void)setScanQrCodeEnable:(BOOL)a0 multiQrCodeEnable:(BOOL)a1 param:(id)a2;
- (void)updateConfigScanQrCodeWithParam:(id)a0;
- (void)setQrCodeCheckEnable:(BOOL)a0 param:(id)a1;
- (void)addCameraBrightnessObserve;
- (void)openCameraTorch:(BOOL)a0;
- (BOOL)currentCameraTorchOn;
- (BOOL)verifyCameraContext;
- (void).cxx_destruct;
- (void)changeToZoomFactor:(double)a0;

@end
