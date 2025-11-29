@class UILabel;

@interface AWEAnchorMediumSearchEmptyView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)setupEmptyViewUI;
- (void)setupEmptyViewTitle:(id)a0 subtitle:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
