@class NSString, NSArray, AWEURLModel;

@interface AWEDislikeDimension : AWEBaseApiModel

@property (nonatomic) long long dimensionID;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *entitys;

+ (id)iconJSONTransformer;
+ (id)entitysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
