@interface IESGLesTextureMvpRenderer : IESGLesBaseMvpRenderer

- (void)render:(unsigned int)a0 inSize:(struct CGSize { double x0; double x1; })a1 outSize:(struct CGSize { double x0; double x1; })a2 shouldClear:(BOOL)a3 renderToScreen:(BOOL)a4;
- (void)render:(id)a0 config:(id)a1;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)doInit;

@end
