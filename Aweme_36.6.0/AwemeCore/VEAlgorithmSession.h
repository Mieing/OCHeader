@class NSString, VEPixelBufferCopyUtils;

@interface VEAlgorithmSession : VERunloopObject <VEAppStatusProtocol> {
    struct IVEAlgorithm { void /* function */ **x0; } *algorithm_;
    long long type_;
    struct IVEAlgorithmParam { void /* function */ **x0; int x1; } *params_;
    BOOL isSync_;
    struct shared_ptr<ITETaskQueue> { struct ITETaskQueue *__ptr_; struct __shared_weak_count *__cntrl_; } processBufferQueue_;
    VEPixelBufferCopyUtils *copyUtils_;
}

@property (copy, nonatomic) id /* block */ completionCallback;
@property (copy, nonatomic) id /* block */ enigmasCallback;
@property (readonly, nonatomic) long long sessionType;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (copy, nonatomic) id /* block */ commonCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProcessSyncFlag:(BOOL)a0;
- (void)qrcodeDetectResetZoomFactor:(float)a0 byUser:(BOOL)a1;
- (id)p_getResult;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 info:(id)a1;
- (void)p_createOneKeyHdrAlgorithmAndParam:(id)a0 error:(id *)a1;
- (void)p_createFaceReenactAlgorithmAndParam:(id)a0 error:(id *)a1;
- (void)p_createCommonImageAlgorithm:(id)a0;
- (void)p_createBorderDetectAlgorithmAndParam:(id)a0 error:(id *)a1;
- (void)p_createCameraProcessAlgorithmAndParam:(id)a0 error:(id *)a1;
- (void)p_createCommonAlgorithmAndParam:(id)a0 error:(id *)a1;
- (void)setScanPostUploader;
- (void)p_setCommonAlgorithmParamAfterInit:(id)a0;
- (id)__generateErrorWithCode:(unsigned long long)a0 Message:(id)a1;
- (id)p_convertAlgoCommUnion:(union VEAlgoCommUnion { void *x0; BOOL x1; int x2; float x3; long long x4; double x5; })a0;
- (id)p_coverResultForCppInfoMap:(void *)a0;
- (void)processPixelBuffer:(struct __CVBuffer { } *)a0 info:(id)a1;
- (void)postScanData;
- (void)configEnigmaAlgoWithParam:(id)a0 byCameraProcessInstance:(void *)a1;
- (void)configSystemQrcodeRecognizeWithParam:(id)a0 byCameraProcessInstance:(void *)a1;
- (void)configQrcodeDetectAlgoWithParam:(id)a0 byCameraProcessInstance:(void *)a1;
- (void)configBachFaceDetectAlgoWithParam:(id)a0 byCameraProcessInstance:(void *)a1;
- (void)configRhythmicMotionAlgoWithParam:(id)a0 byCameraProcessInstance:(void *)a1;
- (void)configShakeDetectAlgoWithParam:(id)a0 byCameraProcessInstance:(void *)a1;
- (void)configImageDefinitionAlgoWithParam:(id)a0 byCameraProcessInstance:(void *)a1;
- (void)configScanAlgoWithParam:(id)a0 byCameraProcessInstance:(void *)a1;
- (void)configScanImageWithParam:(id)a0 andScanParam:(void *)a1;
- (void)configScanImageStreamWithParam:(id)a0 andScanParam:(void *)a1;
- (void)setAlgorithmProcessSize:(struct TESizei { int x0; int x1; } *)a0;
- (void)p_processError;
- (void)operationCameraProcessWithParam:(id)a0;
- (void)processScanErrorWithParam:(id)a0 error:(int)a1 description:(const void *)a2;
- (void)setAlgProcessSize:(struct CGSize { double x0; double x1; })a0;
- (void)setForceEnigmaCallback:(BOOL)a0;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)resignActive;
- (void)startWithCompletion:(id /* block */)a0;
- (id).cxx_construct;
- (void)enterForeground;
- (void)dealloc;
- (int)cancel;
- (void)memoryWarning;
- (id)initWithConfig:(id)a0 error:(id *)a1;

@end
