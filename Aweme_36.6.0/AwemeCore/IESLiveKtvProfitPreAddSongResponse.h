@class IESLiveKtvProfitPreAddSongResponse_ResponseData;

@interface IESLiveKtvProfitPreAddSongResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitPreAddSongResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
