@interface DAVLokiResourceProtocol_OC : DAVResourceProtocol_OC {
    struct shared_ptr<davinci::loki::LokiResourceProtocol> { struct LokiResourceProtocol *__ptr_; struct __shared_weak_count *__cntrl_; } _lokiResource;
}

+ (BOOL)isLokiResourceWithResourceId:(id)a0;

- (id)buildURS;
- (id)initWithEffectId:(id)a0;
- (id)initWithResourceId:(id)a0 panel:(id)a1;
- (id)getSourceFrom;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getParameters;

@end
