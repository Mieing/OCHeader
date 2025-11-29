@class NSMutableArray;

@interface BattleCloudCollaborateThroneFightInfo_OddStageInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;

+ (id)descriptor;

@end
