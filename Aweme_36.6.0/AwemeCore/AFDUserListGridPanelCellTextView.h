@class UILabel, UIStackView;

@interface AFDUserListGridPanelCellTextView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)addTapGestureForSubtitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
