@class IESLiveKtvProfitGetSingingSongInfoResponse_ResponseData;

@interface IESLiveKtvProfitGetSingingSongInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitGetSingingSongInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
