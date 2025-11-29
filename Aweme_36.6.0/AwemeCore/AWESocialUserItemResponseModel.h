@class NSArray;

@interface AWESocialUserItemResponseModel : AWEBaseApiModel

@property (nonatomic) long long itemModelLevel;
@property (copy, nonatomic) NSArray *userItemList;

+ (id)userItemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
