@class NSArray, NSString;

@interface IESECDLGradientRenderModel : IESECDLBaseRenderModel

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *radius;
@property (copy, nonatomic) NSString *orientation;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
