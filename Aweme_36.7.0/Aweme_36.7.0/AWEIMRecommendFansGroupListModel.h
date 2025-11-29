@class NSArray;

@interface AWEIMRecommendFansGroupListModel : IESIMBaseApiModel

@property (retain, nonatomic) NSArray *groupList;

+ (id)groupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
