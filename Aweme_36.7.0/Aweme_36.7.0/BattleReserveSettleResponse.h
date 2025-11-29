@class BattleReserveSettleResponse_ResponseData;

@interface BattleReserveSettleResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BattleReserveSettleResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
