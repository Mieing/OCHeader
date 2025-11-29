@class NSString, MMListenDiscoverResponse, TingMusicSquareLoadWholeProcessLogInfo;

@interface TingMusicSquareFetchContext : WXPBGeneratedMessage

@property (nonatomic) int reason;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) BOOL readCompleteCache;
@property (nonatomic) BOOL onlyRefreshPreload;
@property (nonatomic) BOOL didApplyReddotPrelaod;
@property (nonatomic) unsigned int reqSeq;
@property (retain, nonatomic) NSString *redDotTipsId;
@property (retain, nonatomic) MMListenDiscoverResponse *requestingResponse;
@property (retain, nonatomic) NSString *sessionBufffer;
@property (retain, nonatomic) NSString *lastBuffer;
@property (nonatomic) unsigned int priority;
@property (nonatomic) BOOL mergeItemRequest;
@property (retain, nonatomic) TingMusicSquareLoadWholeProcessLogInfo *logInfo;
@property (nonatomic) unsigned int requestCount;

+ (void)initialize;

@end
