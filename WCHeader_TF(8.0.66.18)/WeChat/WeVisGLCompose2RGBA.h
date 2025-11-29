@class WeVisGLComposeQuad;

@interface WeVisGLCompose2RGBA : NSObject {
    WeVisGLComposeQuad *mQuadDrawer;
}

@property (nonatomic) BOOL isInitialized;

- (id)initWithMaxSupportTextureCnt:(int)a0;
- (void)setOutputWidth:(int)a0 outputHeight:(int)a1;
- (void)composeElements:(id)a0 transpose:(BOOL)a1 rotation:(int)a2;
- (void).cxx_destruct;

@end
