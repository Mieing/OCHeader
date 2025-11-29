@interface NPEffectCamTemplateService_OC : NSObject {
    struct shared_ptr<nle::preset::NPEffectCamTemplateService> { struct NPEffectCamTemplateService *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

+ (int)addSegmentEffects:(id)a0 fromJson:(id)a1 willAddEffect:(id /* block */)a2 parseFailed:(id /* block */)a3;

- (void)makeTemplate:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
