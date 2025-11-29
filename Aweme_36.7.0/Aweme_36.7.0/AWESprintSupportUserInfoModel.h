@class NSArray;

@interface AWESprintSupportUserInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *followersList;
@property (nonatomic) long long sprintNumber;

+ (id)followersListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
