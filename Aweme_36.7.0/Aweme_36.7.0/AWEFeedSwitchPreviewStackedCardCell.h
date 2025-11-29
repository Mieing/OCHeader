@class UILabel, UIView;

@interface AWEFeedSwitchPreviewStackedCardCell : UICollectionViewCell

@property (nonatomic) long long cellType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UIView *cardWrapperView;
@property (weak, nonatomic) UIView *cardContainerView;
@property (weak, nonatomic) UIView *cardBorderView;
@property (nonatomic) BOOL isSelectedCell;
@property (retain, nonatomic) UIView *cardHolderView;

+ (double)labelAndCardMargin;
+ (double)screenHeight;
+ (double)screenWidth;
+ (id)titleLabelFont;
+ (double)cellWidth;
+ (double)cellHeight;

- (void)configCardWrapperView:(id)a0 containerView:(id)a1 borderView:(id)a2;
- (void)showTitleLabelShowAnimation;
- (void)updateTitleLabelWithAlpha:(double)a0;
- (void)configWithCellType:(long long)a0 selected:(BOOL)a1;
- (double)labelLeftMargin;
- (void).cxx_destruct;
- (id)titleText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideTitleLabel;

@end
