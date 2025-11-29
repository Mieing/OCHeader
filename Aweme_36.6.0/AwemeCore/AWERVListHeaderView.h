@class UILabel, AWERVLineHeaderView;

@interface AWERVListHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWERVLineHeaderView *lineView;

- (void)showLineIfNeed:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureConstraints;
- (void)updateTitle:(id)a0;
- (void)configureSubviews;

@end
