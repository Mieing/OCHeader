@class UIImage;

@interface CMCCameraControlFrameCache : NSObject

@property (retain, nonatomic) UIImage *captureFrameCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
