@class UIImageView;

@interface CJPayOCRScanWindowView : UIView

@property (retain, nonatomic) UIImageView *leftTopImageView;
@property (retain, nonatomic) UIImageView *leftBottomImageView;
@property (retain, nonatomic) UIImageView *rightTopImageView;
@property (retain, nonatomic) UIImageView *rightBottomImageView;
@property (retain, nonatomic) UIImageView *scanImageView;
@property (nonatomic) long long translationTopMarginY;
@property (nonatomic) long long translationBottomMarginY;

- (void)showCornersView:(BOOL)a0;
- (void)showScanLineView:(BOOL)a0;
- (void)p_startScanAnimation;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
