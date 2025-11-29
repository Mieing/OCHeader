@class NSString, NSArray;

@interface AWESearchPOIPositionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *target;
@property (retain, nonatomic) NSArray *positions;

+ (id)positionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
