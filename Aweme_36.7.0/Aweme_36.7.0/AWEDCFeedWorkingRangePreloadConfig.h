@interface AWEDCFeedWorkingRangePreloadConfig : AWEDCFeedBaseConfig

@property (nonatomic) long long workingRangeSize;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL disableLoadmoreUntilUserScroll;
@property (nonatomic) BOOL dynamicDisableLoadMore;
@property (nonatomic) BOOL disablePreloadCoverImage;

- (void)setupDefaultConfig;

@end
