@class CAGradientLayer, FinderWindowProductInfo, UILabel, MMWebImageView;
@protocol MMFinderLiveFeedStreamProductExpandedCardViewDelegate;

@interface MMFinderLiveFeedStreamProductExpandedCardView : MMFinderLiveFeedStreamWidgetBaseView

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *promotingLabel;
@property (retain, nonatomic) CAGradientLayer *promotingGradientLayer;
@property (weak, nonatomic) id<MMFinderLiveFeedStreamProductExpandedCardViewDelegate> delegate;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTaskId:(id)a0;
- (void)prepareForReuse;
- (id)priceString:(unsigned long long)a0;
- (void)onClick:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)startExposeAction;
- (void)endExposeAction;
- (void).cxx_destruct;

@end
