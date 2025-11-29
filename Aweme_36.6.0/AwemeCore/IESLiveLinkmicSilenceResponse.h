@class IESLiveLinkmicSilenceResponse_ResponseData;

@interface IESLiveLinkmicSilenceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkmicSilenceResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
