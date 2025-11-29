@class WAEJTexture;

@interface WAEJCanvasContextWebGLTexture : WAEJCanvasContextWebGL {
    WAEJTexture *texture;
}

- (void)dealloc;
- (void)create;
- (void)resizeToWidth:(short)a0 height:(short)a1;
- (id)texture;
- (id)getTexture;

@end
