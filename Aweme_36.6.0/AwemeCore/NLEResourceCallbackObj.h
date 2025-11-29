@interface NLEResourceCallbackObj : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEResourceCallback> { struct NLEResourceCallback *__ptr_; struct __shared_weak_count *__cntrl_; } callback;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
