@class UIView;

@interface AWEECOMIMDynamicCardContainerViewV2 : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIView *bkgView;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)childWidthElementModel:(id)a0 defaultWidth:(double)a1;

- (void)updateWithElememtModel:(id)a0;
- (id)addChildElementViewBkgView;
- (double)defaultChildVerticalSpace;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
