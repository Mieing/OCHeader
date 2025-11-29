@class NSString, NLECaptionDuration_OC;

@interface NPTextParamResource_OC : NSObject {
    struct shared_ptr<nle::preset::NPTextParamResource> { struct NPTextParamResource *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (copy, nonatomic) NSString *keyID;
@property (copy, nonatomic) NLECaptionDuration_OC *captionDuration;
@property (copy, nonatomic) NSString *textProtocol;

- (struct shared_ptr<nle::preset::NPTextParamResource> { struct NPTextParamResource *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPTextParamResource> { struct NPTextParamResource *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
