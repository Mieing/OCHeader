@class NSString, NSArray, NSNumber, AFDRecommendToFriendUserModel;

@interface AWEFriendRecommendInfo : AWEBaseApiModel

@property (nonatomic) double recommendPredictRate;
@property (nonatomic) double recommendPredictScore;
@property (copy, nonatomic) NSString *friendRecommendFrom;
@property (copy, nonatomic) NSString *fromAppID;
@property (retain, nonatomic) NSNumber *friendRecommendSource;
@property (retain, nonatomic) AFDRecommendToFriendUserModel *currentUser;
@property (copy, nonatomic) NSArray *userList;
@property (nonatomic) BOOL forceFriendRecommendGuideLabel;
@property (nonatomic) BOOL disableFriendRecommendGuideLabel;

+ (id)userListJSONTransformer;
+ (id)currentUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
