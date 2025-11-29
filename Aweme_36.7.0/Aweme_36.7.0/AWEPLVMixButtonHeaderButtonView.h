@class UIImageView, UILabel, UIGestureRecognizer;

@interface AWEPLVMixButtonHeaderButtonView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) id /* block */ jumpSchemaOnClickBlock;
@property (retain, nonatomic) UIGestureRecognizer *tapGesture;

- (void)setupViewWithTitle:(id)a0 image:(id)a1;
- (void)jumpSchemaOnClick;
- (void)setToButtonTypeIfCan:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setButtonType:(unsigned long long)a0;
- (void)setupView;
- (id)initWithTitle:(id)a0 image:(id)a1;
- (void)setTitle:(id)a0 image:(id)a1;

@end
