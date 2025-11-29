@interface NLETemplateAiAutoFillFrameService_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLETemplateAiAutoFillFrameService> { struct NLETemplateAiAutoFillFrameService *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (id)initWithCPPValue:(struct shared_ptr<nle::media::NLETemplateAiAutoFillFrameService> { struct NLETemplateAiAutoFillFrameService *x0; struct __shared_weak_count *x1; })a0;
- (id)getProcessVideoCache:(id)a0 workspace:(id)a1;
- (long long)processVideo:(id)a0 workspace:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2 expectedFps:(long long)a3;
- (void)cancelProcessVideo;
- (void)setProcessVideDelegate:(id)a0;
- (BOOL)setAutoFillFrameFilter:(id)a0;
- (void)setAlgorithmScale:(double)a0;
- (double)getAlgorithmScale;
- (unsigned long long)getalgorithmType;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)setAlgorithmType:(unsigned long long)a0;

@end
