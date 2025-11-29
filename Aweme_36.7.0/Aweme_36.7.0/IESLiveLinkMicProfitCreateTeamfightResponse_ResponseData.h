@class HTSLiveLinkmicTeamfightInfo;

@interface IESLiveLinkMicProfitCreateTeamfightResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicTeamfightInfo *teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;

+ (id)descriptor;

@end
