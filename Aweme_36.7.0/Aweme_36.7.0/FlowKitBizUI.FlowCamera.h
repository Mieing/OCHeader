@interface FlowKitBizUI.FlowCamera : NSObject {
    void /* unknown type, empty encoding */ recorder;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ preview;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ zoomChangeCount;
    void /* unknown type, empty encoding */ onceRunning;
    void /* unknown type, empty encoding */ cameraListeners;
    void /* unknown type, empty encoding */ _previewFps;
    void /* unknown type, empty encoding */ orientation;
    void /* unknown type, empty encoding */ motionManager;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ startCaptureBlock;
    void /* unknown type, empty encoding */ cameraFlashMode;
    void /* unknown type, empty encoding */ cameraZoomFactor;
    void /* unknown type, empty encoding */ zoomBlock;
    void /* unknown type, empty encoding */ zoomGestureBlock;
    void /* unknown type, empty encoding */ pixelBuffer;
    void /* unknown type, empty encoding */ focusBlock;
    void /* unknown type, empty encoding */ currentCameraSource;
}

- (void)pinckGestureHanleWithGesture:(id)a0;
- (void)tapGestureHandleWithGesture:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
