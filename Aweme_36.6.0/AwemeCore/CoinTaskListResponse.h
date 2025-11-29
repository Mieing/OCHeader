@class CoinTaskListResponse_Data;

@interface CoinTaskListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CoinTaskListResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
