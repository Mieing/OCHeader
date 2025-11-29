@class NSArray, NSDictionary, NSString;

@interface AWEDoubleColumnSearchMerchandiseUpdateQueryModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *renderInfo;
@property (copy, nonatomic) NSDictionary *businessInfo;
@property (copy, nonatomic) NSDictionary *styleInfo;
@property (copy, nonatomic) NSArray *deleteInfo;
@property (copy, nonatomic) NSString *updateStrategy;
@property (copy, nonatomic) NSDictionary *rebackParams;

+ (id)styleInfoJSONTransformer;
+ (id)renderInfoJSONTransformer;
+ (id)businessInfoJSONTransformer;
+ (id)deleteInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
