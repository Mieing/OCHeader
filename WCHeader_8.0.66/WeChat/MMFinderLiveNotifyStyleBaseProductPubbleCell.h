@class UIImageView, AnyPromise, UILabel, MMWebImageView;

@interface MMFinderLiveNotifyStyleBaseProductPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AnyPromise *getProductInfo;

+ (double)horizontalMargin;
+ (id)font;
+ (struct CGSize { double x0; double x1; })preferSizeForCellFrame:(id)a0;
+ (double)preferDisplayDurationWithComment:(id)a0;

- (id)initWithCellFrame:(id)a0;
- (void)layoutUI;
- (id)hotSaleInfo;
- (double)rightIconLeftMargin;
- (double)priceRightMargin;
- (void)reportLiveStatsWithActionType:(int)a0;
- (void)didMoveToWindow;
- (void)onTap;
- (void)onWillOpenProduct:(id)a0;
- (void)runCustomEnterAnimation;
- (void)reportExposeWithExtra:(id)a0;
- (void)reportClickWithExtra:(id)a0 product:(id)a1;
- (void).cxx_destruct;

@end
