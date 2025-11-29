@class NSString, RelativeUserStructV2;

@interface FriendRecommendLabelUserStructV2 : GPBMessage

@property (retain, nonatomic) RelativeUserStructV2 *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *recommendPostscript;
@property (nonatomic) BOOL hasRecommendPostscript;
@property (nonatomic) long long recommendTime;
@property (nonatomic) BOOL hasRecommendTime;
@property (nonatomic) int recommendAppId;
@property (nonatomic) BOOL hasRecommendAppId;

+ (id)descriptor;

@end
