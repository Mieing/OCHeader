@class NSArray, NSString;

@interface AWENearbyMultiPOIModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *poiInfoArray;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *secTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long UIStyle;
@property (copy, nonatomic) NSString *cardID;

+ (id)poiInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
