@interface AWEDCFeedShimmerConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enableShimmer;
@property (nonatomic) double shimmerViewHeight;
@property (nonatomic) double shimmerViewTopOffset;
@property (nonatomic) double animationAlphaDark;
@property (nonatomic) double animationAlphaLight;
@property (nonatomic) BOOL maskShimmerByCell;
@property (copy, nonatomic) id /* block */ shimmerMaskCellFilter;

- (void)setupDefaultConfig;
- (double)defaultShimmerViewHeight;
- (void).cxx_destruct;

@end
