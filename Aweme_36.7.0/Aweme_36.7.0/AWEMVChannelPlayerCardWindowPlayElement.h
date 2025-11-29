@class UIButton, UIImage;

@interface AWEMVChannelPlayerCardWindowPlayElement : AWEMVChannelPlayerCardBaseElement

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImage *scaledIconImage;

- (void)updateButtonImage:(BOOL)a0;
- (id)resizeImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)tapAction;

@end
