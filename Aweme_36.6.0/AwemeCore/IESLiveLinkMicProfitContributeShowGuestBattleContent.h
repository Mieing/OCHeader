@class HTSLiveGuestBattleUserGradeInfo;

@interface IESLiveLinkMicProfitContributeShowGuestBattleContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGuestBattleUserGradeInfo *gradeInfo;
@property (nonatomic) BOOL hasGradeInfo;

+ (id)descriptor;

@end
