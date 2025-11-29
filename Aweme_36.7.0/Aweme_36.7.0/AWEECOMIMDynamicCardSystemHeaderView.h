@class UIView;

@interface AWEECOMIMDynamicCardSystemHeaderView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIView *bkgView;

+ (double)designHeight;
+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)topPadding;
+ (double)bottomPadding;
+ (id)titleFont;

- (void)updateWithElememtModel:(id)a0;
- (id)iconImgView;
- (double)heightWithElementModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)headerLabel;

@end
