@class NSMutableDictionary, UIView;

@interface AWEECOMIMDynamicCardButtonGroupView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) NSMutableDictionary *customActionModeldict;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)buttonShouldShow:(id)a0;
+ (double)autoSizeBtnTopSpacing;
+ (double)vSpaceingBetweenBtns;
+ (double)autoSizeBtnHeight;
+ (double)autoSizeBtnBottomSpacing;
+ (double)autoSizeBtnLeftSpacing;

- (void)updateWithElememtModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void)onButtonClick:(id)a0;
- (id)autoSizeButtonWithType:(long long)a0 buttonText:(id)a1 disabled:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autoSizeButtonFrameWithCurrentIdx:(unsigned long long)a0 buttonModelArr:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
