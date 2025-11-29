@class AWEDCFeedSkeletonConfig, AWEDCFeedShimmerConfig;

@interface AWEDCFeedPageLoadingConfig : AWEDCFeedBaseConfig

@property (nonatomic) unsigned long long loadingStyle;
@property (retain, nonatomic) AWEDCFeedSkeletonConfig *skeletonConfig;
@property (retain, nonatomic) AWEDCFeedShimmerConfig *shimmerConfig;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
