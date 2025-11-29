@class BattleReservePanelResponse_ResponseData;

@interface BattleReservePanelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BattleReservePanelResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
