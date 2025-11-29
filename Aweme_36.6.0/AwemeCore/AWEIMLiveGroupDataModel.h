@class NSArray;

@interface AWEIMLiveGroupDataModel : AWEBaseApiModel

@property (nonatomic) long long livePeopleCount;
@property (copy, nonatomic) NSArray *groupUsers;

+ (id)groupUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
