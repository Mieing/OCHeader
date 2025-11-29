@class QueryCoinTaskMissionResponse_Data;

@interface QueryCoinTaskMissionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) QueryCoinTaskMissionResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
