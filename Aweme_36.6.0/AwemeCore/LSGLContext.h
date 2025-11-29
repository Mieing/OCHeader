@class NSString, EAGLSharegroup, NSMutableDictionary, LSGLFramebufferCache, EAGLContext, NSMutableArray, NSObject, LSGLProgram;
@protocol OS_dispatch_queue;

@interface LSGLContext : NSObject <LSGLContextProtocol> {
    NSMutableDictionary *shaderProgramCache;
    NSMutableArray *shaderProgramUsageHistory;
    EAGLSharegroup *_sharegroup;
    void *lsopenGLESContextQueueKey;
}

@property struct __CVOpenGLESTextureCache { } *gcoreVideoTextureCache;
@property (nonatomic) BOOL useES3;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue;
@property (retain, nonatomic) LSGLProgram *currentShaderProgram;
@property (readonly, retain, nonatomic) EAGLContext *context;
@property (readonly) struct __CVOpenGLESTextureCache { } *coreVideoTextureCache;
@property (readonly) LSGLFramebufferCache *framebufferCache;
@property (retain, nonatomic) NSMutableArray *effectHandleTrash;
@property (nonatomic) float enableMipmapRatio;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL enablePreviewOpaqueCorrect;
@property BOOL adaptEffectRenderMsgTypeResource;
@property (nonatomic) BOOL videoOptSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedImageProcessingContext;
+ (id)sharedImageProcessingContext:(id)a0;
+ (BOOL)deviceSupportsOpenGLESExtension:(id)a0;
+ (int)maximumTextureSizeForThisDevice;
+ (void)releaseContext;
+ (id)sharedContextQueue;
+ (id)sharedFramebufferCache;
+ (void)useImageProcessingContext;
+ (void)setActiveShaderProgram:(id)a0;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumVaryingVectorsForThisDevice;
+ (BOOL)deviceSupportsRedTextures;
+ (BOOL)deviceSupportsFramebufferReads;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWithinATextureForSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)supportsFastTextureUpload;

- (void)useAsCurrentContext;
- (id)initWithES3:(BOOL)a0;
- (void)resetContext:(BOOL)a0;
- (id)initWithQueueName:(id)a0 withES3:(BOOL)a1;
- (void)presentBufferForDisplay;
- (void)useSharegroup:(id)a0;
- (id)programForVertexShaderString:(id)a0 fragmentShaderString:(id)a1;
- (void)setContextShaderProgram:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)createContext;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)resetContext;
- (void *)contextKey;

@end
