@class NSArray;

@interface AFDPublishVisibleListResponseModel : AWEBaseApiModel

@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSArray *visibleUserList;

+ (id)visibleUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
