@class ReceiveCoinTaskAwardResponse_Data;

@interface ReceiveCoinTaskAwardResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReceiveCoinTaskAwardResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
