@class WADynamicBackgroundGLContext;

@interface WADynamicBackgroundGLObject : NSObject

@property (retain, nonatomic) WADynamicBackgroundGLContext *context;
@property (nonatomic) union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } modelMatrix;

- (id)initWithGLContext:(id)a0;
- (void)update:(double)a0;
- (void)draw:(id)a0;
- (void).cxx_destruct;

@end
