@class NSString, NSArray, AWEURLModel;

@interface AWESearchPOIStruct : AWEBaseApiModel

@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *iconList;
@property (copy, nonatomic) NSArray *iconListLight;
@property (copy, nonatomic) AWEURLModel *cover;

+ (id)coverJSONTransformer;
+ (id)iconListJSONTransformer;
+ (id)iconListLightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
