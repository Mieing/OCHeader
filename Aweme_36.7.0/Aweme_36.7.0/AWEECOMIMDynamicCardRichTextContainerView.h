@class UIView;

@interface AWEECOMIMDynamicCardRichTextContainerView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIView *bkgView;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateWithElememtModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (id)addChildElementViewBkgView;
- (void)addChildElementView:(id)a0 model:(id)a1 top:(double)a2 height:(double)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
