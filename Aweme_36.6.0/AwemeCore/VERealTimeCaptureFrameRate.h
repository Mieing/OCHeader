@interface VERealTimeCaptureFrameRate : NSObject

@property (nonatomic) long long frontCameraCaptureRate;
@property (nonatomic) long long backCameraCaptureRate;

- (id)init;

@end
