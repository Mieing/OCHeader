@interface NLEResourceCallbackMemoryManagerShim : NSObject

@property (readonly, nonatomic) struct shared_ptr<nle::media::NLEResourceCallback> { struct NLEResourceCallback *__ptr_; struct __shared_weak_count *__cntrl_; } cb;

+ (id)shimWith:(struct shared_ptr<nle::media::NLEResourceCallback> { struct NLEResourceCallback *x0; struct __shared_weak_count *x1; })a0;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
