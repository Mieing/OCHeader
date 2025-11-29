@class GXNodeTreeCreator;

@interface GXRenderManager : NSObject

@property (retain, nonatomic) GXNodeTreeCreator *creator;

- (void)setNeedLayout:(id)a0;
- (BOOL)computeAndApplyLayout:(id)a0;
- (id)computeLayout:(id)a0;
- (id)creatTemplateContext;
- (id)renderViewByTemplateItem:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1;
- (void)relayout:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)renderView:(id)a0;

@end
