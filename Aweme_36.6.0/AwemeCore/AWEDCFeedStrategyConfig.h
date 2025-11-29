@class AWEDCFeedInnerDetailOptimizeConfig, AWEDCFeedAdjustFrameConfig, AWEDCFeedImageContentPreloadConfig, AWEDCFeedImageLoadControlConfig, AWEDCFeedScrollFPSOptimizeConfig, AWEDCFeedRefreshConfig, AWEDCFeedAutoPlayConfig, AWEDCFeedVideoContentPreloadConfig, AWEDCFeedSimultaneousConfig, AWEDCFeedNetworkConfig, AWEDCFeedSmartLoadMoreConfig, AWEDCFeedInnerCacheConfig, AWEDCFeedStrategyDedupStatsConfig, AWEDCFeedTidyAwemeConfig, AWEDCFeedCellSearchAfterWatchConfig, AWEDCFeedPlaceholderConfig, AWEDCFeedFallbackDataFetchConfig, AWEDCFeedWorkingRangePreloadConfig, AWEDCFeedImageConfig, AWEDCFeedFetchDataConfig, AWEDCFeedStrategyHistoryCellFindConfig;

@interface AWEDCFeedStrategyConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enableLiveTrim;
@property (nonatomic) BOOL openCoverBaseColor;
@property (nonatomic) BOOL openCoverShowAnimation;
@property (nonatomic) long long prefetchCoverCountAfterFetchAndCache;
@property (nonatomic) BOOL openVideoTransitionOptimization;
@property (nonatomic) long long forceRefreshAfterSearch;
@property (retain, nonatomic) AWEDCFeedInnerDetailOptimizeConfig *innerDetailOptimizeConfig;
@property (retain, nonatomic) AWEDCFeedScrollFPSOptimizeConfig *scrollFPSOptimizeConfig;
@property (retain, nonatomic) AWEDCFeedPlaceholderConfig *placeholderConfig;
@property (retain, nonatomic) AWEDCFeedFallbackDataFetchConfig *fallbackDataConfig;
@property (retain, nonatomic) AWEDCFeedInnerCacheConfig *innerCacheConfig;
@property (retain, nonatomic) AWEDCFeedWorkingRangePreloadConfig *workingRangePreloadConfig;
@property (retain, nonatomic) AWEDCFeedFetchDataConfig *fetchDataConfig;
@property (retain, nonatomic) AWEDCFeedTidyAwemeConfig *tidyAwemeConfig;
@property (retain, nonatomic) AWEDCFeedAutoPlayConfig *autoPlayConfig;
@property (retain, nonatomic) AWEDCFeedVideoContentPreloadConfig *videoContentPreloadConfig;
@property (retain, nonatomic) AWEDCFeedImageContentPreloadConfig *imageContentPreloadConfig;
@property (retain, nonatomic) AWEDCFeedImageLoadControlConfig *imageLoadControlConfig;
@property (retain, nonatomic) AWEDCFeedAdjustFrameConfig *adjustFrameConfig;
@property (retain, nonatomic) AWEDCFeedNetworkConfig *networkConfig;
@property (retain, nonatomic) AWEDCFeedSimultaneousConfig *simultaneousConfig;
@property (retain, nonatomic) AWEDCFeedRefreshConfig *refreshConfig;
@property (retain, nonatomic) AWEDCFeedSmartLoadMoreConfig *smartLoadMoreConfig;
@property (retain, nonatomic) AWEDCFeedImageConfig *imageConfig;
@property (retain, nonatomic) AWEDCFeedStrategyDedupStatsConfig *dedupStatsConfig;
@property (retain, nonatomic) AWEDCFeedStrategyHistoryCellFindConfig *historyCellFindConfig;
@property (retain, nonatomic) AWEDCFeedCellSearchAfterWatchConfig *searchAfterWatchConfig;

- (void)setupDefaultConfig;
- (id)identifierAndPropertyName;
- (void).cxx_destruct;

@end
