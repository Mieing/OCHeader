@class NSObject, NSString, NSError, NLETemplateModel_OC, NLETemplateMattingService_OC;
@protocol OS_dispatch_group, LVMattingDelegate;

@interface LVMattingService : NSObject <NLETemplateMattingDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (weak, nonatomic) id<LVMattingDelegate> delegate;
@property (retain, nonatomic) NLETemplateMattingService_OC *nleMattingService;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *taskGroup;
@property (retain, nonatomic) NLETemplateModel_OC *templateModel;
@property (copy, nonatomic) NSString *workspace;
@property (copy, nonatomic) NSString *algorithmPath;
@property (nonatomic) BOOL hasModel;
@property (nonatomic) BOOL hasConfig;
@property (retain, nonatomic) NSError *fetchConfigError;
@property (retain, nonatomic) NSError *fetchModelError;
@property (nonatomic) long long mattingCount;
@property (nonatomic) long long picCnt;
@property (nonatomic) long long videoCnt;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProcess;
- (void)templateMattingOnProgress:(double)a0;
- (void)templateMattingOnSuccess;
- (void)templateMattingOnError:(id)a0 error:(id)a1;
- (id)initWithTemplateModel:(id)a0 workspace:(id)a1;
- (BOOL)checkIfNeedMatting:(id)a0;
- (void)downloadEffectWithCompletion:(id /* block */)a0;
- (void)downloadAlgorithmModelWithCompletion:(id /* block */)a0;
- (id)algorithmConfigID;
- (void).cxx_destruct;
- (void)cancel;

@end
