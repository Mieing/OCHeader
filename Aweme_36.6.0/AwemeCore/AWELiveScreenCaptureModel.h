@class UIImage, NSURL;

@interface AWELiveScreenCaptureModel : NSObject

@property (retain, nonatomic) UIImage *screenshot;
@property (copy, nonatomic) NSURL *localScreenshotURL;
@property (retain, nonatomic) UIImage *recordVideoCover;
@property (copy, nonatomic) NSURL *recordVideoURL;

- (void).cxx_destruct;

@end
