@class BattleEndPunishResponse_ResponseData;

@interface BattleEndPunishResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BattleEndPunishResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
