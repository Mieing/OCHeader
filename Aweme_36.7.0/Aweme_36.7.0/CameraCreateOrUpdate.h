@class NSString;

@interface CameraCreateOrUpdate : IESLivePBBaseMessage

@property (nonatomic) long long cameraId;
@property (copy, nonatomic) NSString *cameraName;
@property (copy, nonatomic) NSString *presetParam;

+ (id)descriptor;

@end
