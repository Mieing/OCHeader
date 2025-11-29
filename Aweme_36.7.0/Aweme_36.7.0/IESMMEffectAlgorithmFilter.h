@class NSArray, IESMMEffectAlgorithm, NSMutableDictionary, NSString;
@protocol IVEEffectAlgorithmProtocol;

@interface IESMMEffectAlgorithmFilter : HTSGLFilter <IVEAlgorithmForwardProtocol, IESMMEffectChangeFaceProtocol, IESMMEffectSLAMProtocol, IVEGestureProtocol, IVEGestureAmazingEngineProtocol, IESMMEffectAlgorithmFilterProtocol>

@property (nonatomic) double timeStamp;
@property (retain, nonatomic) IESMMEffectAlgorithm *algorithm;
@property (retain, nonatomic) NSMutableDictionary *existAuxiliaryImageTextures;
@property (retain, nonatomic) NSArray *auxiliaryTextureKeys;
@property (readonly, nonatomic) id<IVEEffectAlgorithmProtocol> algorithmImp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long usedEffect;
@property (nonatomic) BOOL isFrontCamera;
@property (nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (nonatomic) BOOL useEffectSuperResolution;
@property (nonatomic) double effectSuperResolutionSizeWidth;
@property (nonatomic) BOOL slamWithoutExtraDeviceMotionData;
@property (copy, nonatomic) id /* block */ algorithmDetectStatus;
@property (copy, nonatomic) id /* block */ facePointBlock;

- (BOOL)handleTouchDown:(struct CGPoint { double x0; double x1; })a0 withType:(unsigned long long)a1;
- (BOOL)handleTouchUp:(struct CGPoint { double x0; double x1; })a0 withType:(unsigned long long)a1;
- (BOOL)handlePanEventWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)handleLongPressEventWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleScaleEvent:(double)a0;
- (BOOL)handleDoubleClickEvent:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)toggleGestureRecognition:(BOOL)a0 type:(int)a1;
- (long long)getSLAMStatus;
- (BOOL)isSLAMRunning;
- (BOOL)getSLAMPlaneDetectStatus;
- (id)getAuxiliaryTextureKeys;
- (void)setAuxiliaryImage:(id)a0 withKey:(id)a1;
- (void)deleteImageTextureForKey:(id)a0;
- (void)removeAllAuxiliaryImages;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (BOOL)setSafeAreas:(id)a0 type:(long long)a1;
- (BOOL)updateTouchInfoForRecognition:(struct _VETouchInfo { unsigned int x0; struct CGPoint { double x0; double x1; } x1; float x2; float x3; int x4; long long x5; })a0;
- (BOOL)isTouchGestureRecognitionEnabled:(int)a0;
- (void)p_clearAuxiliaryImageTexturesIfNeeded;
- (id)initWithConfig:(id)a0 effectHandle:(void *)a1 context:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)handleTouchEvent:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleRotationEvent:(double)a0;

@end
