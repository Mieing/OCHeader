@class BattleOpenResult_ResponseData;

@interface BattleOpenResult : IESLivePBBaseMessage

@property (retain, nonatomic) BattleOpenResult_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
