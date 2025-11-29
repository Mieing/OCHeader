@class NSString, NSArray;

@interface IESLLSearchPOIPositionModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *target;
@property (retain, nonatomic) NSArray *positions;

+ (id)positionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
