@class AWEUserModel;

@interface AWEQuickStoryFriendInfoResponseModel : AWEBaseApiModel

@property (copy, nonatomic) AWEUserModel *storyFriendInfo;

+ (id)storyFriendInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
