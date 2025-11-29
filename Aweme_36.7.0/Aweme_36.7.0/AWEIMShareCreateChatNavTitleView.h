@class UILabel;

@interface AWEIMShareCreateChatNavTitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) unsigned long long titleAlign;

- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
