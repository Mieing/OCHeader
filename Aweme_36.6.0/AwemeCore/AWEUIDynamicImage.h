@interface AWEUIDynamicImage : UIImage

@property (copy, nonatomic) id /* block */ resolveBlock;
@property (nonatomic) long long currentTheme;

+ (id)dynamicImageWithResolveBlock:(id /* block */)a0;
+ (id)createDynamicImageWithStyle:(long long)a0 resolveBlock:(id /* block */)a1;

- (id)awe_imageWithThemeColor:(id)a0;
- (id)preferDarkImage;
- (id)preferLightImage;
- (id)dynamicImageWithTransformer:(id /* block */)a0;
- (void)syncAccessibilityPropertyWith:(id)a0;
- (id)syncAttributeWith:(id)a0;
- (id)imageWithThemeStyle:(long long)a0;
- (id)createPreferImageWithStyle:(long long)a0;
- (long long)preferredTheme;
- (void)setPreferredTheme:(long long)a0;
- (void)p_syncAccessibilityPropertyWith:(id)a0;
- (void)syncPropertyWith:(id)a0;
- (id)imageWithColorSuit:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)image;
- (id)imageWithConfiguration:(id)a0;
- (id)imageWithHorizontallyFlippedOrientation;
- (id)imageWithRenderingMode:(long long)a0;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)imageWithBaselineOffsetFromBottom:(double)a0;
- (id)imageWithoutBaseline;
- (id)imageByApplyingSymbolConfiguration:(id)a0;
- (id)imageWithTintColor:(id)a0 renderingMode:(long long)a1;
- (id)imageWithTintColor:(id)a0;
- (id)imageFlippedForRightToLeftLayoutDirection;

@end
