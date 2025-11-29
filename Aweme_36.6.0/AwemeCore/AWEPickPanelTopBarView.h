@class UILabel, AWEPickPanelTopBarViewModel, UIView;

@interface AWEPickPanelTopBarView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEPickPanelTopBarViewModel *viewModel;

- (void)bindViewModel;
- (void)updateTitleLabelText;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
