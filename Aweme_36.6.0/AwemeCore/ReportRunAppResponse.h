@class ReportRunAppResponse_Data;

@interface ReportRunAppResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReportRunAppResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
