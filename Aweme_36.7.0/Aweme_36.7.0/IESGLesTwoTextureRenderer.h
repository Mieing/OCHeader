@interface IESGLesTwoTextureRenderer : IESGLesBaseRenderer

- (void)render:(unsigned int)a0 inTextureId2:(unsigned int)a1 vertices:(const float *)a2 texCoords:(const float *)a3 texCoords2:(const float *)a4 shouldClear:(BOOL)a5;
- (void)render:(id)a0 config:(id)a1;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)doInit;

@end
