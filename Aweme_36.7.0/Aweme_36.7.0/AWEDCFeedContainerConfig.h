@class AWEDCFeedNotificationConfig, AWEDCFeedSpacingConfig, NSArray, AWEDCFeedEmptyPageConfig, AWEDCFeedHeaderFooterConfig, AWEDCFeedColorConfig, AWEDCFeedPageLoadingConfig, AWEDCFeedTopAreaConfig, AWEDCFeedGradientBGViewConfig, AWEDCFeedDislikeConfig;

@interface AWEDCFeedContainerConfig : AWEDCFeedBaseConfig

@property (retain, nonatomic) AWEDCFeedHeaderFooterConfig *headerFooterConfig;
@property (retain, nonatomic) AWEDCFeedEmptyPageConfig *emptyPageConfig;
@property (retain, nonatomic) AWEDCFeedColorConfig *colorConfig;
@property (retain, nonatomic) AWEDCFeedSpacingConfig *spacingConfig;
@property (retain, nonatomic) AWEDCFeedPageLoadingConfig *pageLoadingConfig;
@property (retain, nonatomic) AWEDCFeedGradientBGViewConfig *gradientBGViewConfig;
@property (retain, nonatomic) AWEDCFeedTopAreaConfig *topAreaConfig;
@property (retain, nonatomic) AWEDCFeedDislikeConfig *dislikeConfig;
@property (retain, nonatomic) AWEDCFeedNotificationConfig *notificationConfig;
@property (nonatomic) BOOL enablePad;
@property (nonatomic, getter=getEnableBigFont) BOOL enableBigFont;
@property (nonatomic) long long sectionColumnCount;
@property (copy, nonatomic) NSArray *sectionControllerClassArray;
@property (retain, nonatomic) Class sectionViewModelClass;
@property (nonatomic) BOOL disableCollectionViewScroll;
@property (copy, nonatomic) id /* block */ scrollViewShouldScrollToTop;
@property (nonatomic) unsigned long long awemeDeleteRemoveCardOccasion;
@property (nonatomic) BOOL hiddenErrorMessageToast;
@property (nonatomic) BOOL disableBoundsWhenTop;
@property (copy, nonatomic) id /* block */ getCollectionViewReloadFinishedOriginalOffset;
@property (copy, nonatomic) id /* block */ shouldPreventRefreshAnimation;
@property (nonatomic) BOOL useTopDividerView;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
