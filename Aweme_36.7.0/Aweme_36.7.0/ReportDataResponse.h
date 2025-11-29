@class ReportDataResponse_Data;

@interface ReportDataResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReportDataResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
