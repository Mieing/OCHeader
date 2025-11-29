@class EAGLContext, NSMutableDictionary;

@interface WAEJTextureStorage : NSObject {
    NSMutableDictionary *params;
    BOOL bCustomTexture;
    EAGLContext *glContext;
}

@property (readonly, nonatomic) unsigned int textureId;
@property (readonly, nonatomic) BOOL immutable;
@property (readonly, nonatomic) double lastBound;

- (id)init;
- (id)initImmutable;
- (id)initWithCustomTexture:(unsigned int)a0 immutable:(BOOL)a1;
- (void)dealloc;
- (void)initParamsDict;
- (void)bindToTarget:(unsigned int)a0 withParams:(id)a1;

@end
