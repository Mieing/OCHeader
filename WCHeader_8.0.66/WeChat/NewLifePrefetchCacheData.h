@class NSString, NewLifeLocalTabTipsInfo, NewLifeStreamResponse;

@interface NewLifePrefetchCacheData : WXPBGeneratedMessage

@property (nonatomic) unsigned long long startPrefetchTimestamp;
@property (retain, nonatomic) NewLifeLocalTabTipsInfo *localTabTipsInfo;
@property (retain, nonatomic) NewLifeStreamResponse *response;
@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) NSString *redDotPath;
@property (retain, nonatomic) NSString *tabTipsUuid;
@property (nonatomic) BOOL isDownloadImage;
@property (retain, nonatomic) NSString *preloadSource;
@property (nonatomic) unsigned int pullType;

+ (void)initialize;

@end
