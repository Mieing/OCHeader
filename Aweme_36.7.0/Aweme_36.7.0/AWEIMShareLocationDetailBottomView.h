@class UILabel, UIButton;

@interface AWEIMShareLocationDetailBottomView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *naviButton;
@property (copy, nonatomic) id /* block */ naviAction;

- (void)naviButtonAction;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
