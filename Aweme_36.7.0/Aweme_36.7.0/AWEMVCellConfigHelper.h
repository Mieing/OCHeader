@class NSString, AWEMVCardResourceCache, AWEDCFeedPageContext;

@interface AWEMVCellConfigHelper : NSObject

@property (retain, nonatomic) AWEMVCardResourceCache *cardResourceCache;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEDCFeedPageContext *context;

- (long long)padHorizontalBreakPoint;
- (id)backupCoverURLWithAweme:(id)a0;
- (double)ratioWithLiveModel:(id)a0;
- (double)limitRatioFromRatio:(double)a0;
- (double)padLargeCardImageRatioWithModel:(id)a0;
- (struct CGSize { double x0; double x1; })maskViewSizeWithFeedConfig:(id)a0 awemeModel:(id)a1 containerView:(id)a2;
- (id)maskViewWithImageSize:(struct CGSize { double x0; double x1; })a0 isLargeCard:(BOOL)a1;
- (double)imageRatioWithModel:(id)a0;
- (double)smallCardHeightWithCellWith:(double)a0;
- (double)largeCardInfoHeightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
- (id)padConfig;
- (id)initWithReferString:(id)a0 context:(id)a1;
- (id)getCoverImageURLWithModel:(id)a0 imageURLSource:(id)a1;
- (void)configImageElementReuseResourceViewWithConfig:(id)a0 position:(long long)a1 awemeModel:(id)a2 pageContext:(id)a3;
- (void)configGradientMaskForImageViewWithMaskConfig:(id)a0 dcFeedConfig:(id)a1 awemeModel:(id)a2 containerView:(id)a3;
- (void)configReuseGradientMaskForImageViewWithMaskConfig:(id)a0 dcFeedConfig:(id)a1 awemeModel:(id)a2 containerView:(id)a3;
- (id)getCoverImageCacheKeyWithModel:(id)a0;
- (void).cxx_destruct;

@end
