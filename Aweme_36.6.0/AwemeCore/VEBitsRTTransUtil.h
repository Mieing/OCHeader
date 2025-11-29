@class VEMVPRenderer, HTSGLContext, HTSGLFramebuffer;

@interface VEBitsRTTransUtil : NSObject

@property (retain, nonatomic) VEMVPRenderer *textureMvpRenderer;
@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) HTSGLFramebuffer *trans8bitRTFramebuffer;
@property (retain, nonatomic) HTSGLFramebuffer *trans10bitRTFramebuffer;

- (id)trans10BitRT28Bit:(id)a0;
- (id)trans8BitRT210Bit:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
