@class BattleReserveRecordResponse_ResponseData;

@interface BattleReserveRecordResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BattleReserveRecordResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
