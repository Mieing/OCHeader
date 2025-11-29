@class GPUImageFramebufferCache, NSMutableDictionary, NSMutableArray, EAGLSharegroup, EAGLContext, NSObject, GLProgram;
@protocol OS_dispatch_queue;

@interface GPUImageContext : NSObject {
    NSMutableDictionary *shaderProgramCache;
    NSMutableArray *shaderProgramUsageHistory;
    EAGLSharegroup *_sharegroup;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue;
@property (retain, nonatomic) GLProgram *currentShaderProgram;
@property (readonly, retain, nonatomic) EAGLContext *context;
@property (readonly) struct __CVOpenGLESTextureCache { } *coreVideoTextureCache;
@property (readonly) GPUImageFramebufferCache *framebufferCache;

+ (void *)contextKey;
+ (id)sharedImageProcessingContext;
+ (id)sharedContextQueue;
+ (id)sharedFramebufferCache;
+ (void)useImageProcessingContext;
+ (void)setCustomContext:(id)a0;
+ (void)checkCustomContext:(id)a0;
+ (void)releaseCustomContext;
+ (void)setActiveShaderProgram:(id)a0;
+ (int)maximumTextureSizeForThisDevice;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumVaryingVectorsForThisDevice;
+ (BOOL)deviceSupportsOpenGLESExtension:(id)a0;
+ (BOOL)deviceSupportsRedTextures;
+ (BOOL)deviceSupportsFramebufferReads;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWithinATextureForSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)supportsFastTextureUpload;

- (id)init;
- (void)dealloc;
- (void)releaseContext;
- (void)initContext;
- (void)checkContext:(id)a0;
- (void)useCustomContext:(id)a0;
- (void)useAsCurrentContext;
- (void)setContextShaderProgram:(id)a0;
- (void)presentBufferForDisplay;
- (id)programForVertexShaderString:(id)a0 fragmentShaderString:(id)a1;
- (void)useSharegroup:(id)a0;
- (id)createContext;
- (void).cxx_destruct;

@end
