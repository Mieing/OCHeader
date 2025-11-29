@class NSData;

@interface EpisodeScreenResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSData *episodeInfo;

+ (id)descriptor;

@end
