@class NSString, HTSLiveUser;

@interface IESLiveLinkMicAudienceLinkerContributorRankResponse_Rank : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *scoreStr;
@property (nonatomic) BOOL isFirstFollow;

+ (id)descriptor;

@end
