@class AVCapturePhotoSettings, NSMutableArray, NSString;
@protocol OMJPhotoCapturerDelegate;

@interface OMJPhotoCapturer : NSObject <AVCapturePhotoCaptureDelegate>

@property (readonly, nonatomic) AVCapturePhotoSettings *requestedPhotoSettings;
@property (weak, nonatomic) id<OMJPhotoCapturerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *photos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequestedPhotoSettings:(id)a0;
- (void)didFinish;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)captureOutput:(id)a0 didFinishCaptureForResolvedSettings:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
