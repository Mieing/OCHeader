@class UIImageView, UILabel;

@interface LVMinimizeHintView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL loading;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)updateDisplay:(unsigned long long)a0 isLandscape:(BOOL)a1;
- (void).cxx_destruct;

@end
