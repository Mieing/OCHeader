@interface MMDeviceCameraInfo : NSObject

@property (nonatomic) long long cameraType;
@property (nonatomic) BOOL isMainCamera;
@property (nonatomic) double baseOpticalZoomFactor;
@property (nonatomic) double minDigitalZoomFactor;
@property (nonatomic) double maxDigitalZoomFactor;
@property (nonatomic) double maxDigitalZoomLimit;

+ (id)defaultInfo;

@end
