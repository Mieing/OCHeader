@class NSString;
@protocol NPPreprocessTTSDelegateProtocol_OC, NPPreprocessCustomInfoDelegateProtocol_OC, NPPreprocessTextParamDelegateProtocol_OC, NPPreprocessAIGCDelegateProtocol_OC, NPDynamicTemplateDelegate_OC;

@interface NPPreprocessParams_OC : NSObject {
    struct shared_ptr<nle::preset::NPPreprocessParams> { struct NPPreprocessParams *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (readonly, nonatomic) struct shared_ptr<nle::preset::NPPreprocessParams> { struct NPPreprocessParams *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) BOOL needPreprocess;
@property (nonatomic) BOOL continueApplyWithPreprocessFail;
@property (nonatomic) BOOL applyFromAIGCAsyncRecovery;
@property (copy, nonatomic) NSString *preprocessPath;
@property (copy, nonatomic) id /* block */ preprocessProgress;
@property (copy, nonatomic) id /* block */ preprocessCompletion;
@property (weak, nonatomic) id<NPPreprocessAIGCDelegateProtocol_OC> aigcDelegate;
@property (weak, nonatomic) id<NPPreprocessCustomInfoDelegateProtocol_OC> customInfoDelegate;
@property (weak, nonatomic) id<NPPreprocessTTSDelegateProtocol_OC> ttsDelegate;
@property (weak, nonatomic) id<NPDynamicTemplateDelegate_OC> dynamicDelegate;
@property (weak, nonatomic) id<NPPreprocessTextParamDelegateProtocol_OC> textParamDelegate;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPPreprocessParams> { struct NPPreprocessParams *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithNeedPreprocess:(BOOL)a0 continueApplyWithPreprocessFail:(BOOL)a1 preprocessPath:(id)a2 preprocessProgress:(id /* block */)a3 preprocessCompletion:(id /* block */)a4;
- (struct shared_ptr<nle::preset::StdFunctionNPGenericTemplatePreprocessMaterialCallback> { struct StdFunctionNPGenericTemplatePreprocessMaterialCallback *x0; struct __shared_weak_count *x1; })generateCppCallbackWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
