@class NSString, IESLiveLinkMicListBizExtra, BattleStatsMeta, IESLiveLinkerStats, HTSLiveAnchorLinkmicAudioPunishInfo, NSMutableArray, GPBInt64ObjectDictionary;

@interface IESLiveLinkMicListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userArray;
@property (readonly, nonatomic) unsigned long long userArray_Count;
@property (retain, nonatomic) BattleStatsMeta *battleStats;
@property (nonatomic) BOOL hasBattleStats;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveLinkerStats *linkerStats;
@property (nonatomic) BOOL hasLinkerStats;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) IESLiveLinkMicListBizExtra *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) HTSLiveAnchorLinkmicAudioPunishInfo *audioPunishInfo;
@property (nonatomic) BOOL hasAudioPunishInfo;
@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) NSMutableArray *aiAssistantsArray;
@property (readonly, nonatomic) unsigned long long aiAssistantsArray_Count;

+ (id)descriptor;

@end
