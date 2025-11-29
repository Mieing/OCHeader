@class HTSLiveLinkMicBattleFinish;

@interface BattleFinishResult_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkMicBattleFinish *finishInfo;
@property (nonatomic) BOOL hasFinishInfo;

+ (id)descriptor;

@end
