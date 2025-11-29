@class UILabel, UIView;

@interface AWERVLVRightPanelContentView : UIView

@property (nonatomic) double topPadding;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *panelView;

- (void)updatePanelView:(id)a0 title:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
