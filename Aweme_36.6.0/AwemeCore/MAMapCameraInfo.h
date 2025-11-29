@interface MAMapCameraInfo : NSObject

@property (nonatomic) struct cameraVec3 { double x; double y; double z; } cameraFrom;
@property (nonatomic) double cameraFov;
@property (nonatomic) struct cameraEulerAngle { double yaw; double pitch; double roll; } cameraEulerAngle;
@property (nonatomic) double aspectRatio;

@end
