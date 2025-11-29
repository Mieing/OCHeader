@interface GOGMM : NSObject

@property (readonly, nonatomic) struct shared_ptr<mmfg::OcrApi> { struct OcrApi *__ptr_; struct __shared_weak_count *__cntrl_; } api;
@property (nonatomic) BOOL ignoreFeatures;
@property (nonatomic) BOOL ignorePhash;
@property (nonatomic) BOOL ignorePdqhash;

+ (id)qr:(id)a0;
+ (id)sec:(const struct GOGImageFeatureItem { id x0; id x1; id x2; } *)a0 v:(const struct GOGVideoFeatureItem { id x0; unsigned int x1; id x2; unsigned int x3; } *)a1;

- (id)init;
- (id)seci:(id)a0;
- (id)secv:(id)a0 r:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
