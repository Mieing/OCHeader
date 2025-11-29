@class ShowPingResponse_Data;

@interface ShowPingResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ShowPingResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
