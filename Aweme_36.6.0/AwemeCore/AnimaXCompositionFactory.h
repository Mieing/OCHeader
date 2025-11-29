@class AnimaXThreadSafeDictionary;

@interface AnimaXCompositionFactory : NSObject

@property (retain, nonatomic) AnimaXThreadSafeDictionary *loaderMap;

+ (id)shared;

- (void)ensureLoaderForScope:(id)a0;
- (void)loadJson:(id)a0 inScope:(id)a1 completion:(id /* block */)a2;
- (void)loadUri:(id)a0 inScope:(id)a1 completion:(id /* block */)a2;
- (void)handleCompositionModel:(struct shared_ptr<lynx::animax::CompositionModel> { struct CompositionModel *x0; struct __shared_weak_count *x1; })a0 error:(const void *)a1 completion:(id /* block */)a2;
- (void)loadJson:(id)a0 completion:(id /* block */)a1;
- (void)loadUri:(id)a0 completion:(id /* block */)a1;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)releaseAll;

@end
