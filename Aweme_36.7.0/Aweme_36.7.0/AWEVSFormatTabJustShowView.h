@class UILabel, UIImageView, UIButton;

@interface AWEVSFormatTabJustShowView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *rowIcon;
@property (retain, nonatomic) UIButton *coverButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (nonatomic) BOOL isDown;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id)loadingAnimation;
- (void)addMasonry;
- (void)buttonClick:(id)a0;
- (void)updateRowDirect:(BOOL)a0;
- (void)buttonClickBlock:(id /* block */)a0;
- (void)hideByClick;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)createUI;

@end
