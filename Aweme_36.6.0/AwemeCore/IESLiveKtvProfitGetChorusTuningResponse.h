@class IESLiveKtvProfitGetChorusTuningResponse_ResponseData;

@interface IESLiveKtvProfitGetChorusTuningResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitGetChorusTuningResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
