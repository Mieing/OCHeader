@interface CKFeatureExtractor : NSObject {
    struct shared_ptr<CKFeature::Extractor> { struct Extractor *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

- (id)initWithCppModel:(void *)a0;
- (struct shared_ptr<CKFeature::Extractor> { struct Extractor *x0; struct __shared_weak_count *x1; })cppModel;
- (id)extractFeatures:(id)a0 autoSave:(BOOL)a1 error:(id *)a2;
- (id)extractFeatures:(id)a0;
- (id)queryFeatures:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0;

@end
