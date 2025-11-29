@class NSString, NSArray;

@interface AWEECommerceEcomButtonModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long animationDelay;
@property (copy, nonatomic) NSArray *initialAreas;
@property (copy, nonatomic) NSArray *finalAreas;

+ (id)initialAreasJSONTransformer;
+ (id)finalAreasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
