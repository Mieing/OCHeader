@class BattleReserveInviteResponse_ResponseData;

@interface BattleReserveInviteResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BattleReserveInviteResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
