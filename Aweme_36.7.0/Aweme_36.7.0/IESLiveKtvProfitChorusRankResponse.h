@class IESLiveKtvProfitChorusRankResponse_ResponseData;

@interface IESLiveKtvProfitChorusRankResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitChorusRankResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
