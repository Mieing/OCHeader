@class NSMutableArray;

@interface BattleStatsMeta_MultiTeamInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *multiAnchorListArray;
@property (readonly, nonatomic) unsigned long long multiAnchorListArray_Count;

+ (id)descriptor;

@end
