@class UIImageView, UILabel, UIButton;

@interface AWEECOMIMChatSerachResultNetErrorView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *refreshBtn;
@property (copy, nonatomic) id /* block */ refreshBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refresh:(id)a0;

@end
