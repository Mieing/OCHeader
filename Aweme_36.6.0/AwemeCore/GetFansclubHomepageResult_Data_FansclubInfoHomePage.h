@class NSString, NSMutableArray;

@interface GetFansclubHomepageResult_Data_FansclubInfoHomePage : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *clubName;
@property (copy, nonatomic) NSString *anchorName;
@property (copy, nonatomic) NSString *anchorAvatarURL;
@property (nonatomic) long long activeFansCount;
@property (nonatomic) long long totalFansCount;
@property (nonatomic) long long popularityRankHour;
@property (copy, nonatomic) NSString *incomeRatio;
@property (nonatomic) long long numOfFansGroup;
@property (nonatomic) long long maxLevel;
@property (retain, nonatomic) NSMutableArray *activityCardsArray;
@property (readonly, nonatomic) unsigned long long activityCardsArray_Count;
@property (copy, nonatomic) NSString *homepageSchema;
@property (copy, nonatomic) NSString *participateText;
@property (nonatomic) long long todayNewFansCount;
@property (nonatomic) BOOL isParticipateInterPlayEnabled;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
