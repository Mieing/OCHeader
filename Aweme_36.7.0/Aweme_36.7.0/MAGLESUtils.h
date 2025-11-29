@interface MAGLESUtils : NSObject

+ (id)sharedInstance;

- (void)loadTextureBuffer:(id)a0 bufferSize:(struct CGSize { double x0; double x1; })a1 textureID:(unsigned int *)a2 textureTRepeat:(BOOL)a3;
- (void)loadTextureImage:(id)a0 textureID:(unsigned int *)a1 textureTRepeat:(BOOL)a2;
- (void)clearTexture:(unsigned int *)a0;
- (id)createContext;

@end
