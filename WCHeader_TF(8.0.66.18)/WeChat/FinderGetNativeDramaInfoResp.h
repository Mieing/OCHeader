@class FinderNativeDramaInfo, NativeDramaEpisodeRanges, NSMutableArray, BaseResponse;

@interface FinderGetNativeDramaInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderNativeDramaInfo *nativeDramaInfo;
@property (retain, nonatomic) NSMutableArray *episodeRangeList;
@property (retain, nonatomic) NativeDramaEpisodeRanges *currentEpisodeRange;

+ (void)initialize;

@end
