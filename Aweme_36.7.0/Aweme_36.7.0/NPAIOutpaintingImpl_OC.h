@interface NPAIOutpaintingImpl_OC : NSObject {
    struct shared_ptr<nle::preset::NPAIOutpaintingImpl> { struct NPAIOutpaintingImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

- (long long)processAIOutpainting:(id)a0 originMaterial:(id)a1 canvasMaterial:(id)a2 cachePath:(id)a3 config:(id)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
