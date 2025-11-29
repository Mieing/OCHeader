@interface VELensColorTransAlgorithm : NSObject

@property (nonatomic) struct ILensEngineInterface { void /* function */ **x0; } *enginePtr;
@property (nonatomic) struct ILensFlowGraphInterface { void /* function */ **x0; } *algorithmPtr;
@property (nonatomic) BOOL isFirstFrame;
@property (nonatomic) long long lastTargetType;
@property (nonatomic) BOOL mIsLensInited;
@property (nonatomic) BOOL mIsLensCreated;

- (BOOL)initEngine;
- (void)releaseEngine;
- (struct __CVBuffer { } *)renderLensHdr:(struct __CVBuffer { } *)a0 targetType:(long long)a1;
- (BOOL)createLensEngine;
- (BOOL)initEngineByParams:(int)a0 maxHeight:(int)a1 hdrPeakLuminance:(int)a2;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
