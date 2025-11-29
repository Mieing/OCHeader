@class UILabel, MMFinderLiveAnchorGoodsCellLeftCardView, MMFinderLiveGoodsPromotionReplayButton, MMUIButton, UIView, MMFinderLiveShopShelfItemReplayInvalidTipsView, NSString, MMFinderLiveShowBoxItemsView, MMFinderLiveTagsLabel, MMFinderLiveGoodsAskedForPromotingView, MMFinderLiveGoodsCellSubInfosView, MMFinderLiveRemindTipsView;
@protocol MMFinderLiveGoodsCellLimitDiscountDelegate, MMFinderLiveGoodsCellResizeDelegate, MMFinderLiveAnchorGoodsCellDelegate;

@interface MMFinderLiveAnchorGoodsCell : MMFinderLiveGoodsCell <MMFinderLiveTagsLabelDelegate>

@property (retain, nonatomic) MMFinderLiveAnchorGoodsCellLeftCardView *leftCardView;
@property (retain, nonatomic) UILabel *saleCountsLabel;
@property (retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel;
@property (retain, nonatomic) MMFinderLiveShowBoxItemsView *evaluationsView;
@property (retain, nonatomic) MMFinderLiveShowBoxItemsView *showBoxItemsView;
@property (retain, nonatomic) MMFinderLiveGoodsCellSubInfosView *subInfosView;
@property (retain, nonatomic) MMFinderLiveGoodsAskedForPromotingView *askedForPromotingView;
@property (retain, nonatomic) MMFinderLiveRemindTipsView *remindTipsView;
@property (retain, nonatomic) MMFinderLiveGoodsPromotionReplayButton *replayButton;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMUIButton *actionButtonSubButton;
@property (retain, nonatomic) UIView *actionButtonSeparatorLine;
@property (retain, nonatomic) MMUIButton *preHotButton;
@property (retain, nonatomic) MMUIButton *showPriceButton;
@property (retain, nonatomic) MMFinderLiveShopShelfItemReplayInvalidTipsView *replayInvalidTipsView;
@property (weak, nonatomic) id<MMFinderLiveAnchorGoodsCellDelegate> cellDelegate;
@property (weak, nonatomic) id<MMFinderLiveGoodsCellResizeDelegate, MMFinderLiveGoodsCellLimitDiscountDelegate> refreshDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultTagSize;
+ (double)titleLineHeight;
+ (double)saleCountsHeight;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
+ (double)titleLeftMargin;
+ (unsigned long long)titleMaxLines;
+ (double)showBoxItemsViewHeight;
+ (id)titleFont;
+ (double)tagsSpacing;
+ (id)subInfosFont;
+ (double)subInfosTopMargin;
+ (double)subInfosHeight;
+ (double)buttonsHeight;
+ (double)buttonsTopMargin;
+ (double)askedForPromotingViewTopMargin;
+ (double)askedForPromotingViewHeight;
+ (double)remindTipsViewTopMargin;
+ (double)remindTipsViewHeight;
+ (double)cellHeightWithModel:(id)a0 cellWidth:(double)a1;
+ (double)imageWidthForCellWidth:(double)a0;
+ (id)identifier;
+ (id)showBoxItemsViewConfig;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)addSaleCountsLabel;
- (void)addGoodsTitleLabel;
- (id)addShowBoxItemsView;
- (void)onWebImageGetDifferentSize;
- (id)createNormalButton;
- (void)addActionButton;
- (void)addActionButtonMainPart;
- (void)addActionButtonSeparatorLine;
- (void)addActionButtonSubButton;
- (void)addPreHotButton;
- (void)addShowPriceButton;
- (void)addReplayButton;
- (void)layoutSubviews;
- (void)onPromoteButtonClicked:(id)a0;
- (void)onPromoteButtonSubPartClicked:(id)a0;
- (void)onPreHotButtonClicked:(id)a0;
- (void)onShowPriceButtonClicked:(id)a0;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)updatePromoteButton;
- (id)accessibilityAttributedLabel;
- (void).cxx_destruct;

@end
