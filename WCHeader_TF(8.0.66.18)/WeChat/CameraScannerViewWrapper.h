@interface CameraScannerViewWrapper : MMObject

@property (nonatomic) BOOL isForbidOperate;

- (void)setCameraInstanceDelegate:(id)a0;
- (void)releaseCameraInstance;
- (void)startCameraInstance;
- (void)stopCameraInstance;
- (BOOL)enableFocusOpt;
- (void)updateFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isFocusSimpleMode;

@end
