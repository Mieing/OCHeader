@class NSString;

@interface CameraInfo : IESLivePBBaseMessage

@property (nonatomic) long long cameraId;
@property (copy, nonatomic) NSString *cameraName;
@property (copy, nonatomic) NSString *rtmpPushURL;

+ (id)descriptor;

@end
