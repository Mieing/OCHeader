@class HTSGLFilterGroup, HTSGLContext;
@protocol IESMMEffectGroupProtocol;

@interface VEImageDetector : NSObject

@property (retain, nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectHandle;
@property (retain, nonatomic) HTSGLContext *context;

- (BOOL)detectPhotoContent:(id)a0 withAlgorithm:(id)a1;
- (long long)detectPhoto:(id)a0 withAlgorithm:(id)a1;
- (id)detectPhoto:(id)a0 withAlgorithm:(id)a1 withAlgorithmType:(unsigned long long)a2;
- (void)initEffect;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
