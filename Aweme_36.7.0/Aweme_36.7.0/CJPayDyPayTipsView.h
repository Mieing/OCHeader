@class UIImageView, UILabel;

@interface CJPayDyPayTipsView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)updateTitle:(id)a0 url:(id)a1;
- (id)p_defaultIcon;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
