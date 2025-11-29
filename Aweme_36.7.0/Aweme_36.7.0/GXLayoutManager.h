@class GXNodeTreeCreator, NSMutableDictionary;

@interface GXLayoutManager : NSObject

@property (retain, nonatomic) GXNodeTreeCreator *creator;
@property (retain, nonatomic) NSMutableDictionary *templateCache;

- (BOOL)computeAndApplyLayout:(id)a0;
- (struct CGSize { double x0; double x1; })sizeWithTemplateItem:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1;
- (id)creatTemplateContext:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1;
- (id)computeLayout:(id)a0;
- (struct CGSize { double x0; double x1; })sizeWithTemplateItem:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1 data:(id)a2;
- (void).cxx_destruct;

@end
