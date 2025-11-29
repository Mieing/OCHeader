@class NSString, AWESocialFollowFriendsRewardDataModel;

@interface AWESocialFollowFriendsRewardResponseModel : AWEBaseApiModel

@property (nonatomic) long long errorNo;
@property (copy, nonatomic) NSString *errorTips;
@property (copy, nonatomic) AWESocialFollowFriendsRewardDataModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
