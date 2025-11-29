@class NSString, NSMutableArray;

@interface BattleCloudCollaborateThroneFightInfo_EvenStageInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;

+ (id)descriptor;

@end
