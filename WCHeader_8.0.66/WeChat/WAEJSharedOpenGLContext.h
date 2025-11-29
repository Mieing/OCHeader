@class WAEJGLProgram2D, WAEJGLProgram2DRadialGradient, EAGLContext, EAGLSharegroup, NSMutableData;

@interface WAEJSharedOpenGLContext : NSObject {
    NSMutableData *vertexBuffer;
}

@property (readonly, nonatomic) WAEJGLProgram2D *programFlat;
@property (readonly, nonatomic) WAEJGLProgram2D *programTexture;
@property (readonly, nonatomic) WAEJGLProgram2D *programAlphaTexture;
@property (readonly, nonatomic) WAEJGLProgram2D *programPattern;
@property (readonly, nonatomic) WAEJGLProgram2DRadialGradient *programRadialGradient;
@property (readonly, nonatomic) EAGLContext *glContext2D;
@property (readonly, nonatomic) EAGLSharegroup *glSharegroup;
@property (readonly, nonatomic) struct sk_sp<GrDirectContext> { struct GrDirectContext *fPtr; } skContext;
@property (readonly, nonatomic) NSMutableData *vertexBuffer;
@property (nonatomic, getter=isEnterBackground) BOOL isEnterBackground;
@property (nonatomic) BOOL forceReleaseInBg;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
