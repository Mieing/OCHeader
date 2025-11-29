@class AVCaptureStillImageOutput;
@protocol CvPhotoCameraDelegate;

@interface CvPhotoCamera : CvAbstractCamera

@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic) id<CvPhotoCameraDelegate> delegate;

- (void)takePicture;
- (void)stop;
- (void)createStillImageOutput;
- (void)createCaptureOutput;
- (void)createCustomVideoPreview;

@end
