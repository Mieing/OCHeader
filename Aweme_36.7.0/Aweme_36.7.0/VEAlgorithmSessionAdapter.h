@class VEAlgorithmSession;

@interface VEAlgorithmSessionAdapter : IESMMObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
}

@property (nonatomic) int processType;
@property (retain, nonatomic) VEAlgorithmSession *algorithmSession;
@property (nonatomic) BOOL started;
@property (copy, nonatomic) id /* block */ resultCallback;

- (void)turnLensSharpen:(BOOL)a0;
- (void)setProcessSyncFlag:(BOOL)a0;
- (void)turnBachFaceDetect:(BOOL)a0;
- (int)currentProcessType;
- (void)updateCameraProcessParams:(id)a0 complete:(id /* block */)a1;
- (void)turnShakingDetect:(BOOL)a0 param:(id)a1 withResult:(id /* block */)a2;
- (void)turnImageDefinitionDetect:(BOOL)a0 param:(id)a1 withResult:(id /* block */)a2;
- (void)turnQrcodeDetect:(BOOL)a0 param:(id)a1 completeResult:(id /* block */)a2 zoomFactor:(id /* block */)a3 needSelect:(id /* block */)a4;
- (void)qrcodeDetectResetZoomFactor:(float)a0 byUser:(BOOL)a1;
- (void)turnSystemEnigma:(BOOL)a0 param:(id)a1 completeResult:(id /* block */)a2;
- (void)turnScan:(BOOL)a0 param:(id)a1 completeResult:(id /* block */)a2;
- (BOOL)needProcess;
- (void)startProcess;
- (void)closeProcess;
- (void)turnEnigma:(BOOL)a0 param:(id)a1 completeResult:(id /* block */)a2 zoomFactor:(id /* block */)a3;
- (void)turnEnigma:(BOOL)a0 param:(id)a1 completeResults:(id /* block */)a2;
- (void)turnRhythmicMotion:(BOOL)a0 framerate:(long long)a1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 info:(id)a1;
- (void)processPixelBuffer:(struct __CVBuffer { } *)a0 info:(id)a1;
- (void)setAlgorithmProcessSize:(struct CGSize { double x0; double x1; })a0;
- (void)setForceEnigmaCallback:(BOOL)a0;
- (void)p_createAlgorithmSession:(long long)a0;
- (void)p_getDevideMotion:(id)a0;
- (void)p_checkProcessType:(int)a0;
- (void)turnBachFaceDetectAndCrop:(BOOL)a0 useSlowPath:(BOOL)a1 completionResult:(id /* block */)a2;
- (void)turnScan:(BOOL)a0 param:(id)a1 scanEditResult:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
