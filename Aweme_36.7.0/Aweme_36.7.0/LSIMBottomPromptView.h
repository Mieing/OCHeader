@class UILabel;

@interface LSIMBottomPromptView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *titleLabel;

+ (double)defaultBottomPromptHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithType:(unsigned long long)a0;

@end
