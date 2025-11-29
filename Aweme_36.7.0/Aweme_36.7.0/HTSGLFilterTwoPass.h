@class VERenderer, HTSGLFramebuffer;

@interface HTSGLFilterTwoPass : HTSGLFilter {
    HTSGLFramebuffer *_secondOutputFramebuffer;
    VERenderer *_secondTextureRenderer;
}

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (id)framebufferForOutput;
- (void)removeOutputFramebuffer;
- (void)initializeRenderer:(id)a0;
- (void)initializeSecondaryAttributes;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
