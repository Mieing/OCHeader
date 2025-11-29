@class BattleReserveReplyResponse_ResponseData;

@interface BattleReserveReplyResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BattleReserveReplyResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
