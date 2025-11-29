@interface AnimaXResourceLoaderHolder : NSObject {
    struct shared_ptr<lynx::animax::ResourcePipelineIOS> { struct ResourcePipelineIOS *__ptr_; struct __shared_weak_count *__cntrl_; } _resourcePipeline;
    struct shared_ptr<lynx::animax::UnzipLoaderIOS> { struct UnzipLoaderIOS *__ptr_; struct __shared_weak_count *__cntrl_; } _unzipLoader;
}

+ (id)loaderForCompositionFactory:(id)a0;
+ (id)loaderForPlayer:(void *)a0 resourceFactory:(id)a1;

- (void)setupResourceFactory:(id)a0;
- (id)initPrivate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)setAssetBundle:(id)a0;

@end
