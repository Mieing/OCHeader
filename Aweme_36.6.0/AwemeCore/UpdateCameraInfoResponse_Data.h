@class CameraInfo;

@interface UpdateCameraInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) CameraInfo *camera;
@property (nonatomic) BOOL hasCamera;

+ (id)descriptor;

@end
