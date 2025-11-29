@class HTSLiveEpisode;

@interface GetEpisodeInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveEpisode *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
