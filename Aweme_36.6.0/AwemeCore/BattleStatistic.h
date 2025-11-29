@class GPBInt64ObjectDictionary;

@interface BattleStatistic : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *anchorMap;
@property (readonly, nonatomic) unsigned long long anchorMap_Count;

+ (id)descriptor;

@end
