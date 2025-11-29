@class NSString, HTSLiveFansclubBadge;

@interface GetFansclubHomepageResult_Data_UserFansclubInfoHomePage : IESLivePBBaseMessage

@property (nonatomic) long long intimacy;
@property (nonatomic) long long level;
@property (nonatomic) long long nextLevelIntimacy;
@property (nonatomic) long long levelAfterLightUp;
@property (nonatomic) int status;
@property (nonatomic) long long temporaryIntimacy;
@property (retain, nonatomic) HTSLiveFansclubBadge *badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) long long autoLightDownTime;
@property (nonatomic) long long increasedIntimacyToday;
@property (copy, nonatomic) NSString *userAvatarURL;
@property (nonatomic) long long participateTime;
@property (copy, nonatomic) NSString *nickname;

+ (id)descriptor;

@end
