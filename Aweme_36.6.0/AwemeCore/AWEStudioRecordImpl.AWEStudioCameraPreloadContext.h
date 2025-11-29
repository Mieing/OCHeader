@class IESMMCameraConfig;

@interface AWEStudioRecordImpl.AWEStudioCameraPreloadContext : NSObject <AWEStudioCameraPreloadProtocol> {
    void /* unknown type, empty encoding */ recorder;
    void /* unknown type, empty encoding */ hasCallCreateCameraInstance;
    void /* unknown type, empty encoding */ cameraCompletion;
    void /* unknown type, empty encoding */ _behaviorLog;
    void /* unknown type, empty encoding */ duetNodes;
    void /* unknown type, empty encoding */ cameraView;
    void /* unknown type, empty encoding */ cameraDidReceiveFirstFrame;
    void /* unknown type, empty encoding */ startCameraVideoCaptureFlag;
    void /* unknown type, empty encoding */ cameraPlaceHolderView;
    void /* unknown type, empty encoding */ cameraHasCreated;
    void /* unknown type, empty encoding */ cameraCreateFinished;
    void /* unknown type, empty encoding */ observerList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraMessage;
}

@property (nonatomic, retain) IESMMCameraConfig *config;

- (void)addActionMessageWith:(id)a0;
- (BOOL)cameraHasCreatedIgnorePreload;
- (BOOL)isCameraInstancePreloaded;
- (id)createCameraView;
- (id)getCameraView;
- (void)getCameraInstance:(id /* block */)a0;
- (void)createCameraInstance:(BOOL)a0;
- (void)createCameraInstance:(BOOL)a0 cameraConfig:(id)a1;
- (void)resetCameraConfig;
- (void)startCameraVideoCapture;
- (void)markFirstFrameTrackerWith:(double)a0;
- (id /* block */)cameraActionMessage;
- (void)recordDuetComposerWith:(id)a0;
- (BOOL)cameraFirstFrameDidReceive;
- (void)receiveCameraFirstFrameWith:(id /* block */)a0;
- (void)addCameraMessageWith:(id)a0;
- (id)matchActionMessageWith:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
