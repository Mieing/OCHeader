@class NSString;

@interface NPCustomInfoResource_OC : NSObject {
    struct shared_ptr<nle::preset::NPCustomInfoResource> { struct NPCustomInfoResource *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (copy, nonatomic) NSString *keyID;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL visible;

- (struct shared_ptr<nle::preset::NPCustomInfoResource> { struct NPCustomInfoResource *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPCustomInfoResource> { struct NPCustomInfoResource *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
