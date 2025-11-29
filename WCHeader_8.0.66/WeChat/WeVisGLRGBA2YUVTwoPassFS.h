@class WeVisGLDrawQuad;

@interface WeVisGLRGBA2YUVTwoPassFS : NSObject {
    WeVisGLDrawQuad *mQuadDrawerY;
    WeVisGLDrawQuad *mQuadDrawerUV;
}

@property (nonatomic) BOOL isInitialized;

- (id)initWith_ITU_R_BT_601_FullRange;
- (void)drawYFromRGBA:(unsigned int)a0 transpose:(BOOL)a1 flipX:(BOOL)a2;
- (void)drawUVFromRGBA:(unsigned int)a0 transpose:(BOOL)a1 flipX:(BOOL)a2;
- (void).cxx_destruct;

@end
