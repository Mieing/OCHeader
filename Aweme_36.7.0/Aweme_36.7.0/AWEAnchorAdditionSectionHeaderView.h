@class UILabel, UIImageView, UIView;

@interface AWEAnchorAdditionSectionHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *rightView;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) long long sectionType;
@property (nonatomic) long long anchorType;

- (void)updateUIWithModel:(id)a0;
- (void)rightTapAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end
