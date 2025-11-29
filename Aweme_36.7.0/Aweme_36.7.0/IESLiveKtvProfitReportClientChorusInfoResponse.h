@class IESLiveKtvProfitReportClientChorusInfoResponse_ResponseData;

@interface IESLiveKtvProfitReportClientChorusInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitReportClientChorusInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
