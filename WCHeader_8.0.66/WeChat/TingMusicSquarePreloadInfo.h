@class TingReddotReportInfo, MMListenRecommendInfo, TingMusicSquarePreloadInfo_SourceInfo, NSData, NSString;

@interface TingMusicSquarePreloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *bytePassBuffer;
@property (retain, nonatomic) NSData *reddotClientBuffer;
@property (retain, nonatomic) TingReddotReportInfo *reportInfo;
@property (retain, nonatomic) NSData *musicGlobalContextBuffer;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;
@property (retain, nonatomic) TingMusicSquarePreloadInfo_SourceInfo *sourceInfo;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long startTime;

+ (void)initialize;

@end
