@class HTSLiveEpisode, NSMutableArray;

@interface EpisodeInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (nonatomic) BOOL hasEpisode;
@property (retain, nonatomic) NSMutableArray *episodesArray;
@property (readonly, nonatomic) unsigned long long episodesArray_Count;
@property (nonatomic) long long lvideoItemId;

+ (id)descriptor;

@end
