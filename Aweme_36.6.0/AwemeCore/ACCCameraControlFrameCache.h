@class UIImage;

@interface ACCCameraControlFrameCache : NSObject

@property (nonatomic) BOOL skipCapture;
@property (retain, nonatomic) UIImage *lastBlurredCaptureFrame;
@property (retain, nonatomic) UIImage *lastCaptureFrame;

+ (id)blurImage:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
