@interface NLEModelDownloader_OC : NSObject {
    struct shared_ptr<TemplateConsumer::NLEModelDownloader> { struct NLEModelDownloader *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (nonatomic) struct shared_ptr<TemplateConsumer::NLEModelDownloader> { struct NLEModelDownloader *x0; struct __shared_weak_count *x1; } cppModel;

- (id)initWithCPPNode:(struct shared_ptr<TemplateConsumer::NLEModelDownloader> { struct NLEModelDownloader *x0; struct __shared_weak_count *x1; })a0;
- (id)fetchResourceList:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)cancelFetch:(id)a0;
- (void)fetchModel:(id)a0 enableAsyncRender:(BOOL)a1 enableBatchFetchRes:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithParams:(id)a0;

@end
