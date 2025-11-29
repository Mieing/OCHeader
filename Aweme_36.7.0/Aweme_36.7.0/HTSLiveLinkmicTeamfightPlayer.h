@class NSString, HTSLiveUser, HTSLiveLinkmicTeamfightContributors;

@interface HTSLiveLinkmicTeamfightPlayer : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *scoreStr;
@property (copy, nonatomic) NSString *scoreFuzzy;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightContributors *contributors;
@property (nonatomic) BOOL hasContributors;
@property (nonatomic) int role;
@property (retain, nonatomic) HTSLiveUser *titleSponsor;
@property (nonatomic) BOOL hasTitleSponsor;
@property (nonatomic) BOOL hitToast;

+ (id)descriptor;

@end
