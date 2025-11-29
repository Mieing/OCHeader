@class FinderWindowProductInfo, MMTimer, PAGView, UILabel, MMWebImageView, MMUIButton;
@protocol MMFinderLiveFeedStreamProductCardViewDelegate;

@interface MMFinderLiveFeedStreamProductCardView : MMFinderLiveFeedStreamWidgetBaseView

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) PAGView *playingIconView;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) BOOL isExpandAnimating;
@property (retain, nonatomic) FinderWindowProductInfo *pendingProductInfo;
@property (weak, nonatomic) id<MMFinderLiveFeedStreamProductCardViewDelegate> delegate;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long watchTimeToChangeBubble;
@property (copy, nonatomic) id /* block */ expandAnimationBlock;

+ (double)defaultHeightWithStyle:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setTaskId:(id)a0;
- (void)prepareForReuse;
- (void)setStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (id)priceString:(unsigned long long)a0;
- (void)onActionButtonDidClick:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)notifyToExpand;
- (void)startExposeAction;
- (void)endExposeAction;
- (void).cxx_destruct;

@end
