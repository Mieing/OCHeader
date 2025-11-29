@class NSString, NSDictionary;

@interface IESLiveLiveOperateExternalCameraAppParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *operateType;
@property (copy, nonatomic) NSString *cameraType;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *direction;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
