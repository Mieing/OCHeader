@class NSString, MotionDetector;

@interface UploadDetectLogic : MMObject <MotionDetectorDelegate> {
    struct CGSize { double width; double height; } _qmpSize;
    BOOL _isForOcr;
    MotionDetector *_motionDetector;
    int _uploadTimes;
    BOOL _canUpload;
    struct timeval { long long tv_sec; int tv_usec; } _lastProcessTime;
}

@property (nonatomic) int retryTimes;
@property (nonatomic) int motionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFocusEngineSize:(struct CGSize { double x0; double x1; })a0 IsForOcr:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)process:(char *)a0;
- (BOOL)canUpload;
- (void)cancelUpload;
- (void)uploadRetry;
- (void)feedbackMotionStateChanged:(int)a0;
- (void)feedbackCameraFocused;
- (void).cxx_destruct;

@end
