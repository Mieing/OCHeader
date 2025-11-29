@class MMFinderLiveFeedStreamProductHotSellingView, MMFinderLiveFeedStreamProductExpandedCardView, FeedsPreviewLiveMultiStyleInfo_StyleOne, MMFinderLiveFeedStreamProductCouponView, MMFinderLiveFeedStreamWidgetBaseView, MMFinderLiveFeedStreamProductGuideView, FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo, NSString, MMFinderLiveFeedStreamProductCardView, FinderWindowProductInfo, FeedsPreviewLiveMultiStyleInfo_StyleTwo, FeedsPreviewLiveMultiStyleInfo_StyleFive, FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo;
@protocol MMFinderLiveFeedStreamProductStyleViewDelegate;

@interface MMFinderLiveFeedStreamProductStyleView : MMFinderLiveFeedStreamWidgetBaseView <MMFinderLiveFeedStreamProductCardViewDelegate, MMFinderLiveFeedStreamProductGuideViewDelegate, MMFinderLiveFeedStreamProductExpandedCardViewDelegate>

@property (retain, nonatomic) MMFinderLiveFeedStreamProductCardView *cardStyleView;
@property (retain, nonatomic) MMFinderLiveFeedStreamProductGuideView *guideStyleView;
@property (retain, nonatomic) MMFinderLiveFeedStreamProductExpandedCardView *expandedCardStyleView;
@property (retain, nonatomic) MMFinderLiveFeedStreamProductHotSellingView *hotSellingStyleView;
@property (retain, nonatomic) MMFinderLiveFeedStreamProductCouponView *couponStyleView;
@property (readonly, nonatomic) MMFinderLiveFeedStreamWidgetBaseView *currentCard;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id<MMFinderLiveFeedStreamProductStyleViewDelegate> delegate;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) BOOL validToShow;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleOne *productGuideStyleConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleTwo *productCardStyleConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleFive *productExpandedCardStyleConf;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (retain, nonatomic) NSString *productGuideRecommendTag;
@property (retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo *hotSellingBubble;
@property (retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo *couponBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (void)resetViews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)addExpandAnimationBlock:(id /* block */)a0;
- (id)reportWording;
- (void)updateProductGuideRecommendTag:(id)a0 type:(unsigned long long)a1;
- (void)setTaskId:(id)a0;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)onFinderFeedStreamProductCardViewClick:(id)a0 jump2Type:(unsigned long long)a1;
- (void)onFinderFeedStreamProductGuideViewClick:(id)a0;
- (void)onFinderFeedStreamProductExpandedCardViewClick:(id)a0;
- (void).cxx_destruct;

@end
