@class NSArray, NSString;

@interface IESECXBridgeEcMallEcImagePreloadParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *imageUrl;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *priority;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
