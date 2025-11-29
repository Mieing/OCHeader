@class IESLiveThemedCompetitionSetting, NSMutableDictionary, NSString;

@interface IESLiveThemedCompetitionInfo : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveThemedCompetitionSetting *setting;
@property (nonatomic) BOOL hasSetting;
@property (retain, nonatomic) NSMutableDictionary *userIdToScore;
@property (readonly, nonatomic) unsigned long long userIdToScore_Count;
@property (nonatomic) int status;
@property (nonatomic) long long competitionId;
@property (copy, nonatomic) NSString *currentPerformerUserId;

+ (id)descriptor;

@end
