@interface AWEBDPMarkDownService : NSObject

+ (id)createFlowMarkdownViewWithInteractLinkBlock:(id /* block */)a0 onTapImageBlock:(id /* block */)a1 textSelectedBlock:(id /* block */)a2;
+ (void)initFlowSDKSharedConfig;
+ (id)getMarkDownViewString:(id)a0;
+ (void)updateFlowMarkdownViewWithView:(id)a0 bundle:(id)a1;
+ (struct CGSize { double x0; double x1; })calculateSizeWithWidth:(double)a0 bundle:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMarkdownViewLastGlyphRectWithView:(id)a0;

- (id)init;

@end
