@class MMListenDiscoverResponse, NSString, MMListenRecommendInfo, TingReddotReportInfo, NSData, TingMusicSquarePreloadInfo, MMListenDiscoverItemResponse;

@interface TingMusicSquarePreloadResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) MMListenDiscoverResponse *discoverResponse;
@property (retain, nonatomic) MMListenDiscoverItemResponse *discoverItemResponse;
@property (retain, nonatomic) MMListenRecommendInfo *info;
@property (retain, nonatomic) TingReddotReportInfo *reportInfo;
@property (retain, nonatomic) NSData *musicGlobalContextBuffer;
@property (nonatomic) unsigned int preloadType;
@property (retain, nonatomic) TingMusicSquarePreloadInfo *preloadInfo;
@property (nonatomic) int preloadTimeCost;

+ (void)initialize;

@end
