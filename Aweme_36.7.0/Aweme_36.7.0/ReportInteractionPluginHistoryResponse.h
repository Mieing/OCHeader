@class ReportInteractionPluginHistoryResponse_Data;

@interface ReportInteractionPluginHistoryResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReportInteractionPluginHistoryResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
