@class NSMutableDictionary, NSMutableArray;

@interface BattleEffectInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *anchorEffectMap;
@property (readonly, nonatomic) unsigned long long anchorEffectMap_Count;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;

+ (id)descriptor;

@end
