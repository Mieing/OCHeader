@class ReportInteractionDataResponse_Data;

@interface ReportInteractionDataResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReportInteractionDataResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
