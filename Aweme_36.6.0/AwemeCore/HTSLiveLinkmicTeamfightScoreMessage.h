@class HTSLiveLinkmicTeamfightInfo, HTSLiveCommon, HTSLiveLinkmicQuickInteract;

@interface HTSLiveLinkmicTeamfightScoreMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightInfo *teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;
@property (retain, nonatomic) HTSLiveLinkmicQuickInteract *quickInteract;
@property (nonatomic) BOOL hasQuickInteract;

+ (id)descriptor;

@end
