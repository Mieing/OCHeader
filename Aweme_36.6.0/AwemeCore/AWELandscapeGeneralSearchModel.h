@class NSString, NSArray;

@interface AWELandscapeGeneralSearchModel : AWEBaseApiModel

@property (nonatomic) long long cursor;
@property (nonatomic) long long hasMore;
@property (copy, nonatomic) NSString *impr_id;
@property (copy, nonatomic) NSArray *itemModels;

+ (id)itemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeModels;
- (void).cxx_destruct;

@end
