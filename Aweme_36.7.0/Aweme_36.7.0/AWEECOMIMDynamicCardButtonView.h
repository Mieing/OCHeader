@class UIButton;

@interface AWEECOMIMDynamicCardButtonView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIButton *innerButton;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)widthWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)buttonShouldShow:(id)a0;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (BOOL)canElementTap;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void)onButtonClick:(id)a0;
- (void).cxx_destruct;

@end
