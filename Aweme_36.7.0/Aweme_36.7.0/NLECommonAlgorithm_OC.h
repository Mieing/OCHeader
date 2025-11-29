@protocol INLEAlgProcessListener_OC;

@interface NLECommonAlgorithm_OC : NSObject {
    struct shared_ptr<nle::media::NLECommonAlgorithm> { struct NLECommonAlgorithm *__ptr_; struct __shared_weak_count *__cntrl_; } _cppAlg;
    struct shared_ptr<nle::media::NLEBaseParam> { struct NLEBaseParam *__ptr_; struct __shared_weak_count *__cntrl_; } _cppParam;
}

@property (weak, nonatomic) id<INLEAlgProcessListener_OC> processListener;

- (int)initWithBaseParam:(id)a0;
- (void)setAlgoProcessCallback:(id)a0;
- (void).cxx_destruct;
- (int)destroy;
- (id).cxx_construct;
- (int)start;
- (id)getResult;

@end
