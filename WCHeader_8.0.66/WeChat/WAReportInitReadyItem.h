@class NSString;

@interface WAReportInitReadyItem : WAReportBaseItem

@property (nonatomic) unsigned int costTimeInMs;
@property (nonatomic) unsigned long long startTimeInMs;
@property (nonatomic) unsigned long long endTimeInMs;
@property (nonatomic) BOOL isDownloadCode;
@property (nonatomic) BOOL isPatch;
@property (nonatomic) unsigned int preloadType;
@property (nonatomic) BOOL isPreloadPageFrame;
@property (nonatomic) BOOL isSplitCodeLib;
@property (nonatomic) BOOL isFirstPageRenderingCacheAccepted;
@property (nonatomic) unsigned int showAd;
@property (nonatomic) BOOL canShowLoadingAdvert;
@property (nonatomic) unsigned long long loadingInEntTInMs;
@property (nonatomic) unsigned int runningState;
@property (nonatomic) unsigned int webviewType;
@property (nonatomic) unsigned int runtimeNo;
@property (nonatomic) unsigned int lazyCodeLoading;
@property (nonatomic) unsigned int engineType;
@property (nonatomic) BOOL exptUseByteCode;
@property (copy, nonatomic) NSString *publibFileNameListUseCodeCache;
@property (copy, nonatomic) NSString *usrFileNameListUseCodeCache;
@property (nonatomic) unsigned int codeCacheFormatVersion;
@property (nonatomic) unsigned int wxProcessColdStartTimeStamp;
@property (nonatomic) unsigned int currentOpenedTaskIndex;
@property (nonatomic) unsigned int splashAdClientState;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
