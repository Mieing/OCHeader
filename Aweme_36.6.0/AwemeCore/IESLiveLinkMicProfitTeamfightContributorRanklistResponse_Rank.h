@class NSString, HTSLiveUser;

@interface IESLiveLinkMicProfitTeamfightContributorRanklistResponse_Rank : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *gapDescription;
@property (copy, nonatomic) NSString *scoreStr;

+ (id)descriptor;

@end
