@class IESLiveKtvProfitChorusMidiRankResponse_ResponseData;

@interface IESLiveKtvProfitChorusMidiRankResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitChorusMidiRankResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
