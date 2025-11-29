@class IESLiveKtvProfitSetChorusTuningResponse_ResponseData;

@interface IESLiveKtvProfitSetChorusTuningResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitSetChorusTuningResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
