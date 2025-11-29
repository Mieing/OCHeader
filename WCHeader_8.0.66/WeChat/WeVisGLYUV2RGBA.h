@class WeVisGLDrawQuad;

@interface WeVisGLYUV2RGBA : NSObject {
    WeVisGLDrawQuad *mQuadDrawer;
    float coorOffsetX;
    float coorOffsetY;
    float coorScaleX;
    float coorScaleY;
}

@property (nonatomic) BOOL isInitialized;

- (id)initWith_ITU_R_BT_601_FullRange;
- (void)setInputWidth:(int)a0 inputHeight:(int)a1 outputWidth:(int)a2 outputHeight:(int)a3;
- (void)liveSetInputWidth:(int)a0 inputHeight:(int)a1 outputWidth:(int)a2 outputHeight:(int)a3;
- (void)drawFromY:(unsigned int)a0 UV:(unsigned int)a1 transpose:(BOOL)a2 rotation:(int)a3;
- (void).cxx_destruct;

@end
