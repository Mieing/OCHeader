@interface CKFeatureInput : NSObject {
    struct shared_ptr<CKFeature::Input> { struct Input *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

- (struct shared_ptr<CKFeature::Input> { struct Input *x0; struct __shared_weak_count *x1; })cppModel;
- (id)initWithResList:(id)a0 algorithmType:(int)a1 algorithmConf:(id)a2 algorithmParams:(id)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
