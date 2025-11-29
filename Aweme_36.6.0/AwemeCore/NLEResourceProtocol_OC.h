@interface NLEResourceProtocol_OC : NSObject {
    struct shared_ptr<nle::resource::NLEResourceProtocol> { struct NLEResourceProtocol *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (nonatomic) struct shared_ptr<nle::resource::NLEResourceProtocol> { struct NLEResourceProtocol *x0; struct __shared_weak_count *x1; } cppValue;

- (id)initWithCPPValue:(struct shared_ptr<nle::resource::NLEResourceProtocol> { struct NLEResourceProtocol *x0; struct __shared_weak_count *x1; })a0;
- (id)getSourceFrom;
- (id)toResourceId;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getParameters;

@end
