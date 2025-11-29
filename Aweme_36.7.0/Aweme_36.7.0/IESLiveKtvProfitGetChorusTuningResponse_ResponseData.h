@class IESLiveChorusTuningInfo;

@interface IESLiveKtvProfitGetChorusTuningResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChorusTuningInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (retain, nonatomic) IESLiveChorusTuningInfo *defaultInfo;
@property (nonatomic) BOOL hasDefaultInfo;

+ (id)descriptor;

@end
