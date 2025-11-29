@class UIView, DUXTextTag, AWEVideoProductPriceView, UIImageView, AWEVideoProductRollingView, DUXBaseStackView, UILabel, AWEVideoProductImageTitleView;

@interface AWEVideoProductDetailHeaderView : UIView

@property (nonatomic) BOOL isFreeStyle;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) AWEVideoProductImageTitleView *imageTitleView;
@property (retain, nonatomic) AWEVideoProductRollingView *rollingSubTitleView;
@property (retain, nonatomic) AWEVideoProductPriceView *priceView;
@property (retain, nonatomic) DUXBaseStackView *tagStackView;
@property (retain, nonatomic) DUXTextTag *repurchaseTag;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *playletDescLabel;
@property (retain, nonatomic) UIView *decorationView;

- (void)setCoverImage:(id)a0;
- (void)setSubTitleText:(id)a0;
- (void)setRankText:(id)a0;
- (void)setSubTitleArray:(id)a0;
- (void)setCoverWithURLArray:(id)a0 defaultImage:(id)a1;
- (void)setCoverImageCornerRadius:(double)a0;
- (void)setCoverImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTitleTopOffset:(double)a0;
- (void)setSubTitleBottomOffset:(double)a0;
- (void)setTitleImageWithURLArray:(id)a0;
- (void)removeTitleImageView;
- (void)addDecorationView:(id)a0 masConstraint:(id /* block */)a1;
- (void)updateToFreeStyle;
- (void)setMarkingTags:(id)a0;
- (void)setPlayletDescription:(id)a0;
- (void)setCurrencyText:(id)a0;
- (void)setTitleRightOffset:(double)a0;
- (void)updateRepurchaseTagWithTag:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setTitleText:(id)a0;
- (void)setupSubviews;
- (void)setTitleImage:(id)a0;
- (void)setPriceText:(id)a0;

@end
