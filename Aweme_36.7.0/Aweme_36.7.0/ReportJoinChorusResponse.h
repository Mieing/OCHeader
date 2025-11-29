@class ReportJoinChorusResponse_ResponseData;

@interface ReportJoinChorusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReportJoinChorusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
