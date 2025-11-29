@class UIImageView, UILabel, UIView;

@interface AWEThemeChooseBtn : UIButton

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) UILabel *decLable;

+ (Class)aAWEBrandColorAdapterClass;

- (id)aAWEBrandColorAdapter;
- (void)setBtnSelected:(BOOL)a0 light:(BOOL)a1;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
