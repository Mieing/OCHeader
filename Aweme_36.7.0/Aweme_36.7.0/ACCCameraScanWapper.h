@class NSString;
@protocol ACCCameraScanEvent, VERecorderPublicProtocol;

@interface ACCCameraScanWapper : NSObject <ACCCameraBuildListener, ACCCameraScanProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCCameraScanEvent> delegate;

- (void)turnScan:(BOOL)a0 param:(id)a1 completeResult:(id /* block */)a2;
- (void)setCameraProvider:(id)a0;
- (void)onCameraInit:(id)a0;
- (void)setScanAnythingEnable:(BOOL)a0 param:(id)a1;
- (void)updateConfigScanAnythingWithParam:(id)a0;
- (void)setScanQrCodeEnable:(BOOL)a0 multiQrCodeEnable:(BOOL)a1 param:(id)a2;
- (void)updateConfigScanQrCodeWithParam:(id)a0;
- (void)setQrCodeCheckEnable:(BOOL)a0 param:(id)a1;
- (void)addCameraBrightnessObserve;
- (void)openCameraTorch:(BOOL)a0;
- (BOOL)currentCameraTorchOn;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
