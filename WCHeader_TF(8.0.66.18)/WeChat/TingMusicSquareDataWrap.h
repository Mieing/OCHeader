@class MMListenDiscoverResponse, TingReddotReportInfo;

@interface TingMusicSquareDataWrap : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenDiscoverResponse *response;
@property (nonatomic) unsigned int reqSeq;
@property (nonatomic) BOOL isOnlineData;
@property (retain, nonatomic) TingReddotReportInfo *redDotReportInfo;
@property (nonatomic) unsigned long long cahceTimeStamp;
@property (nonatomic) BOOL isMergeRequest;

+ (void)initialize;

@end
