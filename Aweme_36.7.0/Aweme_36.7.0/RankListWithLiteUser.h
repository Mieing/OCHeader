@class ContributionInfo, LiteUserInfo, NSMutableArray;

@interface RankListWithLiteUser : IESLivePBBaseMessage

@property (retain, nonatomic) LiteUserInfo *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long score;
@property (nonatomic) int onlineStatus;
@property (nonatomic) int performingStatus;
@property (nonatomic) long long diamond;
@property (nonatomic) double contributionScore;
@property (retain, nonatomic) ContributionInfo *contributionInfo;
@property (nonatomic) BOOL hasContributionInfo;
@property (retain, nonatomic) NSMutableArray *audienceAvatarThumbArray;
@property (readonly, nonatomic) unsigned long long audienceAvatarThumbArray_Count;

+ (id)descriptor;

@end
