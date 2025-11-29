@class UIButton, UILabel, AWEInsetsLabel, UIView;

@interface AWEPasteboardPermissionCardView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEInsetsLabel *contentLabel;
@property (retain, nonatomic) UIButton *openButton;
@property (retain, nonatomic) UIButton *denyButton;
@property (copy, nonatomic) id /* block */ openBlock;
@property (copy, nonatomic) id /* block */ denyBlock;

- (void)openButtonTapped:(id)a0;
- (void)denyButtonTapped:(id)a0;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
