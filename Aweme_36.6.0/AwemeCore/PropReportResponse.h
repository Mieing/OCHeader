@class PropReportResponse_Data;

@interface PropReportResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PropReportResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
