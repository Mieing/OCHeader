@class FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo, MMFinderLiveFeedStreamBaseRecommendWordingView;

@interface MMFinderLiveFeedStreamProductHotSellingView : MMFinderLiveFeedStreamWidgetBaseView

@property (retain, nonatomic) MMFinderLiveFeedStreamBaseRecommendWordingView *baseRecommendWordingView;
@property (retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo *bubble;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (id)reportWording;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTaskId:(id)a0;
- (void)startExposeAction;
- (void)endExposeAction;
- (void).cxx_destruct;

@end
