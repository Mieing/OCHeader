@class EpisodeInfoResponse_ResponseData;

@interface EpisodeInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) EpisodeInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
