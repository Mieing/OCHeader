@class BattleMatchReplyResponse_ResponseData;

@interface BattleMatchReplyResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BattleMatchReplyResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
