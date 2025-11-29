@class BattleInfo;

@interface InfoByBattleResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BattleInfo *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
