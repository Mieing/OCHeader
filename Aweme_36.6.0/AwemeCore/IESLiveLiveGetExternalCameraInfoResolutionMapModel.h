@class NSString, NSArray;

@interface IESLiveLiveGetExternalCameraInfoResolutionMapModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *defaultResolutionKey;
@property (copy, nonatomic) NSString *recommendResolutionKey;
@property (copy, nonatomic) NSArray *resolutions;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
