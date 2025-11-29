@interface VEPreloadModule : NSObject

+ (void)prepareHelpers;
+ (void)prepareVEContext;
+ (void)prepareVEGLShader;
+ (void)setupVideoEditor;
+ (void)setEffectAPIUsingAsync;
+ (void)preLoadVEShader_textureRender;
+ (void)prepareVEShader_YUVRender;

@end
