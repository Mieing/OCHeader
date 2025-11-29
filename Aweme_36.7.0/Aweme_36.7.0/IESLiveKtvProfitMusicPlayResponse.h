@class IESLiveKtvProfitMusicPlayResponse_ResponseData;

@interface IESLiveKtvProfitMusicPlayResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitMusicPlayResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
