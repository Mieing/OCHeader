@class NSString, NSDictionary;

@interface AnnieChangeVsCameraViewParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *cameraId;
@property (copy, nonatomic) NSDictionary *eventTracking;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
