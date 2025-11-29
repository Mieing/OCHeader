@class NSString, NSNumber;

@interface IESLiveLiveGetInteractToolInfoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *interactAppId;
@property (retain, nonatomic) NSNumber *interactId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
