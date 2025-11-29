@class NSString, NSMutableArray, FriendRecommendLabelUserStructV2;

@interface FriendRecommendInfoStructV2 : GPBMessage

@property (nonatomic) double recommendPredictScore;
@property (nonatomic) BOOL hasRecommendPredictScore;
@property (nonatomic) double recommendPredictRate;
@property (nonatomic) BOOL hasRecommendPredictRate;
@property (copy, nonatomic) NSString *isFriendRecommend;
@property (nonatomic) BOOL hasIsFriendRecommend;
@property (nonatomic) long long fromApp;
@property (nonatomic) BOOL hasFromApp;
@property (copy, nonatomic) NSString *recommendUserAppList;
@property (nonatomic) BOOL hasRecommendUserAppList;
@property (nonatomic) int friendRecommendSource;
@property (nonatomic) BOOL hasFriendRecommendSource;
@property (retain, nonatomic) FriendRecommendLabelUserStructV2 *primaryLabelUser;
@property (nonatomic) BOOL hasPrimaryLabelUser;
@property (retain, nonatomic) NSMutableArray *labelUserListArray;
@property (readonly, nonatomic) unsigned long long labelUserListArray_Count;
@property (nonatomic) BOOL forceFriendRecommendGuideLabel;
@property (nonatomic) BOOL hasForceFriendRecommendGuideLabel;
@property (nonatomic) BOOL disableFriendRecommendGuideLabel;
@property (nonatomic) BOOL hasDisableFriendRecommendGuideLabel;

+ (id)descriptor;

- (BOOL)disableFriendRecommendGuideLabel;
- (int)friendRecommendSource;
- (double)recommendPredictRate;
- (double)recommendPredictScore;

@end
