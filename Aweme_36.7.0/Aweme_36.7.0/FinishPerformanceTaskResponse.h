@class FinishPerformanceTaskResponse_Data;

@interface FinishPerformanceTaskResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FinishPerformanceTaskResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
