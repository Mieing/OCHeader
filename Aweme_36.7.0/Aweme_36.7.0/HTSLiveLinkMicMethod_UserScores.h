@class NSString;

@interface HTSLiveLinkMicMethod_UserScores : IESLivePBBaseMessage

@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long weeklyRank;
@property (copy, nonatomic) NSString *scoreRelativeText;
@property (nonatomic) BOOL isLargePkScore;
@property (nonatomic) BOOL roomLikeTrigger;
@property (copy, nonatomic) NSString *scoreBlurText;
@property (nonatomic) long long battleRank;
@property (nonatomic) BOOL newScoreOpen;
@property (copy, nonatomic) NSString *multiPkTeamScoreText;
@property (nonatomic) long long multiPkTeamScore;
@property (nonatomic) long long multiPkTeamRank;
@property (nonatomic) BOOL isMultiPkRelativeText;
@property (copy, nonatomic) NSString *curAddScoreText;
@property (nonatomic) long long buffScoreRatio;
@property (nonatomic) long long contributeCount;
@property (nonatomic) long long scoreVersion;

+ (id)descriptor;

@end
