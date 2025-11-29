@class UILabel, UIView;

@interface AWELeftSideBaCollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) double horizontalPadding;

+ (double)titleLabelHeight;
+ (double)collectionHeaderViewHeight;
+ (double)bottomPadding;
+ (id)titleLabelFont;

- (void)newAWELeftSideBaCollectionHeaderViewSetCorner;
- (void)oldAWELeftSideBaCollectionHeaderViewSetCorner;
- (void)updateWithHorizontalPadding:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end
