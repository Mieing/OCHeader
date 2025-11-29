@interface AWEMethodProfiler : NSObject

+ (void)_aweLazyRegisterLoad;
+ (void)safProcessing:(void *)a0 withTag:(id)a1;
+ (void)startProfiler;
+ (void)awe_hookInitMethodForClass:(Class)a0;
+ (void)setTagDict:(id)a0 forSel:(SEL)a1 forClass:(Class)a2;

- (id)initWithNibName_awemp_swizzle:(id)a0 bundle:(id)a1;
- (id)initWithFrame_awemp_swizzle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init_awemp_swizzle;

@end
