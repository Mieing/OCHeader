@class LatexParam, LatexIcon;

@interface LatexView : UIView

@property (retain, nonatomic) LatexParam *param;
@property struct shared_ptr<tex::TeXIcon> { struct TeXIcon *__ptr_; struct __shared_weak_count *__cntrl_; } icon;
@property struct shared_ptr<tex::Graphics2D_iOS> { struct Graphics2D_iOS *__ptr_; struct __shared_weak_count *__cntrl_; } graphics;
@property struct shared_ptr<tex::Color_iOS> { struct Color_iOS *__ptr_; struct __shared_weak_count *__cntrl_; } background;
@property struct shared_ptr<tex::Color_iOS> { struct Color_iOS *__ptr_; struct __shared_weak_count *__cntrl_; } foreground;
@property (readonly, nonatomic) LatexIcon *latexIcon;

+ (struct shared_ptr<tex::Color_iOS> { struct Color_iOS *x0; struct __shared_weak_count *x1; })colorWithUIColor:(id)a0;

- (long long)iconDepth;
- (id)initWithParam:(id)a0 icon:(id)a1;
- (struct CGSize { double x0; double x1; })textBoundSize;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupConfig;

@end
