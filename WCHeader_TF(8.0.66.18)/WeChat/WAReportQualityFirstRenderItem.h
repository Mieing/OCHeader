@interface WAReportQualityFirstRenderItem : WAReportBaseItem

@property (nonatomic) unsigned int costTimeInMs;
@property (nonatomic) unsigned long long startTimeInMs;
@property (nonatomic) unsigned long long endTimeInMs;
@property (nonatomic) unsigned int preloadType;
@property (nonatomic) BOOL isPreloadPageFrame;
@property (nonatomic) BOOL isSplitCodeLib;
@property (nonatomic) BOOL isFirstPageRenderingCacheAccepted;
@property (nonatomic) unsigned int showAd;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
