@class IESLiveThemedCompetitionInfo, NSString, HTSLiveLinkmicQuickInteract, HTSLiveLinkmicThemedCompetitionScoreChangeContent_WinContent;

@interface HTSLiveLinkmicThemedCompetitionScoreChangeContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveThemedCompetitionInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (copy, nonatomic) NSString *scoreChangeUserId;
@property (retain, nonatomic) HTSLiveLinkmicQuickInteract *quickInteract;
@property (nonatomic) BOOL hasQuickInteract;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionScoreChangeContent_WinContent *newAdvanceUser;
@property (nonatomic) BOOL hasNewAdvanceUser;

+ (id)descriptor;

@end
