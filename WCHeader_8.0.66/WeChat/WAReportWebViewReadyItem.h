@class NSString;

@interface WAReportWebViewReadyItem : WAReportBaseItem

@property (nonatomic) unsigned int costTimeInMs;
@property (nonatomic) unsigned long long startTimeInMs;
@property (nonatomic) unsigned long long endTimeInMs;
@property (nonatomic) unsigned int preloadType;
@property (nonatomic) BOOL isPreloadPageFrame;
@property (nonatomic) BOOL isFirstPageRenderingCacheAccepted;
@property (nonatomic) unsigned int runningState;
@property (nonatomic) unsigned int engineType;
@property (nonatomic) BOOL exptUseByteCode;
@property (nonatomic) unsigned int webViewType;
@property (copy, nonatomic) NSString *publibFileNameListUseCodeCache;
@property (copy, nonatomic) NSString *usrFileNameListUseCodeCache;
@property (nonatomic) unsigned int codeCacheFormatVersion;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
