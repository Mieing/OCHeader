@class IESLiveThemedCompetitionInfo;

@interface HTSLiveLinkmicThemedCompetitionOnceMoreContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveThemedCompetitionInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) long long oldCompetitionId;

+ (id)descriptor;

@end
