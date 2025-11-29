@class BattleCloudCollaborateThroneFightInfo_OddStageInfo, BattleCloudCollaborateThroneFightInfo_EvenStageInfo, StreamXInfo, NSMutableArray;

@interface BattleCloudCollaborateThroneFightInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *stagesArray;
@property (readonly, nonatomic) unsigned long long stagesArray_Count;
@property (nonatomic) int curStage;
@property (retain, nonatomic) BattleCloudCollaborateThroneFightInfo_EvenStageInfo *evenStageInfo;
@property (nonatomic) BOOL hasEvenStageInfo;
@property (retain, nonatomic) BattleCloudCollaborateThroneFightInfo_OddStageInfo *oddStageInfo;
@property (nonatomic) BOOL hasOddStageInfo;
@property (retain, nonatomic) StreamXInfo *streamXInfo;
@property (nonatomic) BOOL hasStreamXInfo;

+ (id)descriptor;

@end
