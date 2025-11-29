@interface IESGLesTextureRenderer : IESGLesBaseRenderer

- (void)render:(unsigned int)a0 shouldClear:(BOOL)a1;
- (void)render:(unsigned int)a0 vertices:(const float *)a1 texCoords:(const float *)a2 shouldClear:(BOOL)a3;
- (void)render:(unsigned int)a0 vertices:(const float *)a1 texCoords:(const float *)a2;
- (void)render:(id)a0 config:(id)a1;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)render:(unsigned int)a0;
- (void)doInit;

@end
