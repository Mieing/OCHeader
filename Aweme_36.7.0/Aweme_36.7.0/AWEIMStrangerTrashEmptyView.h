@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIMStrangerTrashEmptyView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *blockWordButton;
@property (nonatomic) BOOL showBlockWordButton;

- (void)p_setupSubviews;
- (void)p_layoutSubviews;
- (void)handleBlockWordButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
