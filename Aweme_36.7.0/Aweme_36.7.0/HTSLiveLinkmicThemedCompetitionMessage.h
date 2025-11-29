@class HTSLiveLinkmicThemedCompetitionStartContent, HTSLiveLinkmicThemedCompetitionShowTimeFinishContent, HTSLiveLinkmicThemedCompetitionShowTimeStartContent, HTSLiveCommon, HTSLiveLinkmicThemedCompetitionScoreChangeContent, HTSLiveLinkmicThemedCompetitionOnceMoreContent, HTSLiveLinkmicThemedCompetitionBannerMessageForPC, HTSLiveLinkmicThemedCompetitionToastMessageForPC, HTSLiveLinkmicThemedCompetitionCloseContent;

@interface HTSLiveLinkmicThemedCompetitionMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionStartContent *startContent;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionCloseContent *closeContent;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionScoreChangeContent *scoreChangeContent;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionOnceMoreContent *onceMoreContent;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionShowTimeStartContent *showTimeStartContent;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionShowTimeFinishContent *showTimeFinishContent;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionBannerMessageForPC *bannerMessageForPc;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionToastMessageForPC *toastMessageForPc;

+ (id)descriptor;

@end
