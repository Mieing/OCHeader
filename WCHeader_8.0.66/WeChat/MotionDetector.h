@class AVCaptureDevice;
@protocol MotionDetectorDelegate;

@interface MotionDetector : MMObject {
    BOOL _isInit;
    BOOL _isFocusLibInit;
    AVCaptureDevice *_defaultCaptureDevice;
    BOOL _focuseEngineRet[2];
}

@property (weak, nonatomic) id<MotionDetectorDelegate> delegate;
@property (readonly, nonatomic) int state;

- (id)init;
- (void)dealloc;
- (int)initFocuseEngineWithSize:(struct CGSize { double x0; double x1; })a0 isForOcr:(BOOL)a1;
- (void)focuseEngineProcess:(char *)a0;
- (int)releaseFocuseEngine;
- (void)start;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
