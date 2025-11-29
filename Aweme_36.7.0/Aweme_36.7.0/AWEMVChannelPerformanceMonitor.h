@class AWEMVChannelPerformanceDataLinkLog, AWEMVChannelCardPerformanceMonitor;

@interface AWEMVChannelPerformanceMonitor : NSObject

@property (nonatomic) double loadBeginTime;
@property (retain, nonatomic) AWEMVChannelPerformanceDataLinkLog *cacheDataLinkLog;
@property (retain, nonatomic) AWEMVChannelPerformanceDataLinkLog *sortDataLinkLog;
@property (nonatomic) double netDurationMS;
@property (nonatomic) BOOL isRenderingCache;
@property (nonatomic) BOOL needCommitRequestTrackParamsFlag;
@property (nonatomic) double uiBeginTime;
@property (nonatomic) double uiBeginDuration;
@property (nonatomic) double uiDuration;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) BOOL didDisappear;
@property (nonatomic) unsigned long long loadResult;
@property (nonatomic) BOOL hasShowContent;
@property (nonatomic) BOOL isScrollToEnterChannel;
@property (nonatomic) double launchFakeViewStartTime;
@property (nonatomic) double launchFakeViewGenerateTime;
@property (nonatomic) BOOL hasShowSplash;
@property (nonatomic) double bannerRequestBeginTime;
@property (nonatomic) double bannerRequestTotalDuration;
@property (nonatomic) double cacheReadyStartWaitingBannerTime;
@property (nonatomic) double cacheWaitingBannerTotalDuration;
@property (nonatomic) long long column;
@property (retain, nonatomic) AWEMVChannelCardPerformanceMonitor *card;
@property (nonatomic) unsigned long long preloadStatus;
@property (nonatomic) unsigned long long landingMethod;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)startPlay:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)startBannerRequest;
- (void)finishBannerRequest;
- (void)startLoadFeedDataFromCache:(BOOL)a0;
- (void)finishLoadFeedData:(id)a0 error:(id)a1 isFromCache:(BOOL)a2;
- (void)commitRequestTrackParams:(id)a0;
- (void)setNeedCommitRequestTrackParams;
- (void)startWaitingBannerAfterCacheReady;
- (void)finishWaitingBannerAfterCacheReady;
- (void)splashWillAppearWithAdModelNotification:(id)a0;
- (void)splashDisappearNotification:(id)a0;
- (BOOL)isShowingSplash;
- (void)commitLoadResult:(unsigned long long)a0;
- (void)trackPageMonitorIfNeeded;
- (BOOL)checkFirstCardDidRender;
- (BOOL)isContentCell:(id)a0;
- (void)finishRender:(id)a0;
- (void)recordHasShowContentCell:(long long)a0;
- (unsigned long long)cardTypeForCell:(id)a0;
- (void)trackPageMonitorImmediately;
- (id)feedCacheParams;
- (void)startLoadUI;
- (void)finishLoadUI;
- (void)startRender:(id)a0;
- (void)finishFirstRefresh:(id)a0;
- (void)finishPlay:(id)a0;
- (BOOL)hasRequestFinished;
- (double)landingToShowDuration;
- (double)landingToPlayedDuration;
- (void)firstEnterChannelIsScroll:(BOOL)a0;
- (void)startShowLaunchFakeView;
- (void)finishGenerateLaunchFakeView;
- (void)dismissLaunchFakeView;
- (void).cxx_destruct;
- (id)init;
- (double)currentDate;
- (void)viewDidDisappear;
- (BOOL)hasPlayed;

@end
