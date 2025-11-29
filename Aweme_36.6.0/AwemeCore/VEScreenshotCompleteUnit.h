@class VEMVPRenderer, NSString, HTSGLFramebuffer, HTSGLContext;

@interface VEScreenshotCompleteUnit : NSObject <VEProcessSampleDelegate>

@property (retain, nonatomic) HTSGLFramebuffer *hdr2sdrFramebuffer;
@property (retain, nonatomic) VEMVPRenderer *textureMvpRenderer;
@property (retain, nonatomic) HTSGLContext *htsGLContext;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
