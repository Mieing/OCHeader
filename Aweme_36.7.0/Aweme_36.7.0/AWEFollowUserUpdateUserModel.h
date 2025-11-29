@class AWEUserModel;

@interface AWEFollowUserUpdateUserModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) long long unwatchedCount;
@property (nonatomic) double latestItemPublishTime;

+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
