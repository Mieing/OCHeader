@class IESLiveKtvProfitReportTuningInfoResponse_ResponseData;

@interface IESLiveKtvProfitReportTuningInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitReportTuningInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
