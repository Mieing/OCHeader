@class FinderPrefetchFlowConfig, NSString, NSData, FinderRedDotCtrlInfo;

@interface LongVideoFeedPrefetchResult : WXPBGeneratedMessage

@property (nonatomic) unsigned long long respTimeSeconds;
@property (retain, nonatomic) FinderRedDotCtrlInfo *requestRedDotInfo;
@property (nonatomic) int resultDataType;
@property (retain, nonatomic) NSData *resultData;
@property (retain, nonatomic) FinderPrefetchFlowConfig *prefetchConfig;
@property (nonatomic) unsigned int readStatus;
@property (retain, nonatomic) NSString *cacheUid;
@property (nonatomic) unsigned int prefetchHitCacheType;

+ (void)initialize;

@end
