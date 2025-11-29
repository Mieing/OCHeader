@interface NLETemplateMattingService_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLETemplateMattingService> { struct NLETemplateMattingService *__ptr_; struct __shared_weak_count *__cntrl_; } cppNode;

+ (id)getMattingWorkSpace:(id)a0 filePath:(id)a1;

- (id)initWithCPPNode:(struct shared_ptr<nle::media::NLETemplateMattingService> { struct NLETemplateMattingService *x0; struct __shared_weak_count *x1; })a0;
- (void)startProcess;
- (id)initWithTemplateModel:(id)a0 workspace:(id)a1 algorithmConfigPath:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;

@end
