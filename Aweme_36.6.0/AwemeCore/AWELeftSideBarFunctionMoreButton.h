@class UILabel, DUXBaseImageView, DUXBadge;

@interface AWELeftSideBarFunctionMoreButton : DUXBaseButton

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) DUXBaseImageView *arrowImageView;
@property (retain, nonatomic) DUXBadge *dotBadge;

- (void)initView;
- (void)initLabel;
- (void)initBadge;
- (void)initArrowImageView;
- (id)createLabel;
- (void)updateTitleLabelText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setBadgeHidden:(BOOL)a0;

@end
