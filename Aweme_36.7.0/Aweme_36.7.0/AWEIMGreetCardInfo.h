@class NSArray, AWEUserModel, NSString;

@interface AWEIMGreetCardInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSArray *userPosts;
@property (nonatomic) long long consecutiveChatDays;
@property (nonatomic) BOOL hasVisitedMyProfile;
@property (nonatomic) BOOL hasRecentPosts;
@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) BOOL isValid;

+ (id)userJSONTransformer;
+ (id)userPostsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
