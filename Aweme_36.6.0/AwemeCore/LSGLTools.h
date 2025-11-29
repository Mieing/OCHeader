@interface LSGLTools : NSObject

+ (unsigned int)TextureFromCGImageRef:(struct CGImage { } *)a0;
+ (struct __CVBuffer { } *)createCVOpenGLESTextureFromUIImage:(id)a0;
+ (unsigned int)CreateGLESTextureFromImage:(struct __CVBuffer { } *)a0 andWidth:(int)a1 andHeight:(int)a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })calculateTextureMatrix:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fitMode:(BOOL)a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })calculateProjectionMatrix:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)convertAffineTransformToFloatArray:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 floatArray:(float *)a1;
+ (void)calcWindRatio:(BOOL)a0 mirrorX:(BOOL)a1 mirrorY:(BOOL)a2 winWidth:(int)a3 winHeight:(int)a4 texWidth:(int)a5 texHeight:(int)a6 matrix:(union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16]; } *)a7;

@end
