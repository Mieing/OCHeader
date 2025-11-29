@class UIView, MMWebImageView, NSString, UIImageView, MMFinderLiveGoodsItem, MMFinderLiveShowBoxItemsGroupsView, MMFinderLiveTagsLabel, MMFinderLiveMultiPriceView, MMFinderLiveProductButton;
@protocol MMFinderLiveBaseGoodsPromoteContentViewDelegate;

@interface MMFinderLiveBaseGoodsPromoteContentView : UIView <MMFinderLiveTagsLabelDelegate>

@property (retain, nonatomic) MMFinderLiveGoodsItem *goods;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMWebImageView *goodsImageView;
@property (retain, nonatomic) UIImageView *withFreeGiftTagView;
@property (retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel;
@property (retain, nonatomic) MMFinderLiveShowBoxItemsGroupsView *showBoxItemsView;
@property (retain, nonatomic) MMFinderLiveMultiPriceView *priceView;
@property (retain, nonatomic) MMFinderLiveProductButton *actionButton;
@property (weak, nonatomic) id<MMFinderLiveBaseGoodsPromoteContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutLeft;
- (void)layoutRightBottom;
- (void)layoutRightTop;
- (void)fillWithGoods:(id)a0;
- (void)refreshData;
- (void)onActionButtonClicked:(id)a0;
- (id)visibleShowBoxItems;
- (void)onWebImageGetDifferentSize;
- (void)startDisplayAnimationWithPart1Duration:(double)a0 part2Duration:(double)a1;
- (void)startHideAnimationWithPart1Duration:(double)a0 part2Duration:(double)a1;
- (id)finderLiveLogReportValueForKey:(id)a0;
- (void).cxx_destruct;

@end
