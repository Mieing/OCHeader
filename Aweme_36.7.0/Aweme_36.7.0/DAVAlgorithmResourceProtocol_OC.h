@interface DAVAlgorithmResourceProtocol_OC : DAVResourceProtocol_OC {
    struct shared_ptr<davinci::algorithm::AlgorithmResourceProtocol> { struct AlgorithmResourceProtocol *__ptr_; struct __shared_weak_count *__cntrl_; } _algorithmResource;
}

+ (BOOL)isAlgorithmResourceWithResourceId:(id)a0;

- (id)initWithRequirements:(id)a0 modelNameMapString:(id)a1;
- (id)buildURS;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelName:(id)a0;

@end
