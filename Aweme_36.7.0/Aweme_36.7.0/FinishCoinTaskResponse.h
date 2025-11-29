@class FinishCoinTaskResponse_Data;

@interface FinishCoinTaskResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FinishCoinTaskResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
