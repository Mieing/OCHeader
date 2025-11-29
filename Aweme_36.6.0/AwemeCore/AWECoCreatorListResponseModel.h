@class NSArray;

@interface AWECoCreatorListResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *coCreatorModelList;

+ (id)coCreatorModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
