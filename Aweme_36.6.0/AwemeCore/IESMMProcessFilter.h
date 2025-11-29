@class NSArray, NSMutableDictionary, IESMMMVEffectFilter, NSMutableArray, IESMMEffectConfig;

@interface IESMMProcessFilter : HTSGLFilter

@property (retain, nonatomic) NSMutableDictionary *inputRotations;
@property (retain, nonatomic) NSMutableDictionary *hasReceivedFrame;
@property (retain, nonatomic) NSMutableDictionary *frameCheckDisabled;
@property (retain, nonatomic) NSMutableDictionary *frameTime;
@property (retain, nonatomic) NSMutableDictionary *frameBuffers;
@property (nonatomic) double timeStamp;
@property (nonatomic) long long textureIndexCount;
@property (retain, nonatomic) NSArray *validResourceID;
@property (retain, nonatomic) NSMutableArray *currentUnRecvResourceID;
@property (retain, nonatomic) IESMMMVEffectFilter *effectFilter;
@property (retain, nonatomic) IESMMEffectConfig *config;

- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (struct CGSize { double x0; double x1; })rotatedSize:(struct CGSize { double x0; double x1; })a0 forIndex:(long long)a1;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeOfFBO;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)releaseRenderManager;
- (void)setValidResourcesID:(id)a0;
- (id)initWithConfig:(id)a0 effectFilter:(id)a1 context:(id)a2;
- (void)createGLRendererIfNeeded;
- (void)setFrameBuffer:(id)a0 forTextureIndex:(long long)a1;
- (void)setInputRotaion:(unsigned long long)a0 forIndex:(long long)a1;
- (unsigned long long)inputRotationForTextureIndex:(long long)a0;
- (id)getIDWithTextureIndex:(long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })frameTimeForTextureIndex:(long long)a0;
- (void)setFrameTIme:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forTextureIndex:(long long)a1;
- (BOOL)frameCheckDiabledForTextureIndex:(long long)a0;
- (void)setFrameCheckDisabled:(BOOL)a0 forTextureIndex:(long long)a1;
- (BOOL)hasReceiverdFrameForTextureIndex:(long long)a0;
- (void)setReceiveFrame:(BOOL)a0 forIndex:(long long)a1;
- (id)frameBufferForTextureIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)initializeAttributes;

@end
