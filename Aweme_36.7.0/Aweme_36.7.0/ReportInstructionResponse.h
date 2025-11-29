@class ReportInstructionResponse_Data;

@interface ReportInstructionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReportInstructionResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
