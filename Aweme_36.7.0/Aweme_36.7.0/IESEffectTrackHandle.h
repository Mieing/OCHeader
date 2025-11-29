@class NSString, LSGLContext;

@interface IESEffectTrackHandle : NSObject <IESEffectTrackHandleProtocol>

@property (nonatomic) int trackIndex;
@property (nonatomic) void *effectTrackHandle;
@property (nonatomic) void *effectHandle;
@property (weak, nonatomic) LSGLContext *context;
@property (nonatomic) BOOL isEnable;
@property (copy, nonatomic) id /* block */ enableBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackHandleWithEffectHandle:(void *)a0 glContext:(id)a1 index:(int)a2;

- (void)destroyTrackHandle;
- (int)setHandleEnable:(BOOL)a0;
- (int)setStickerPaths:(id)a0 ids:(id)a1 count:(int)a2 config:(id)a3;
- (int)setStickerIntensity:(id)a0 key:(id)a1 value:(float)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (int)setOutputTexture:(struct bef_texture_st { unsigned int x0; void *x1; int x2; int x3; int x4; int x5; int x6; char *x7; char *x8; void *x9; int x10; char *x11; } *)a0;

@end
