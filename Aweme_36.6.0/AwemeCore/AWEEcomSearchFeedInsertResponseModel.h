@class NSArray;

@interface AWEEcomSearchFeedInsertResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *itemList;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
