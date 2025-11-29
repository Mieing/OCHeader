@class NSArray;

@interface AWEFollowListGroupFilterResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *groups;

+ (id)groupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
