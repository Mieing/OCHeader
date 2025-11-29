@class NSString, NLEModel_OC;

@interface NPPreset_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPPreset> { struct NPPreset *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (readonly, copy, nonatomic) NSString *presetID;
@property (readonly, nonatomic) NLEModel_OC *contentModel;
@property (readonly, copy, nonatomic) NSString *templateReport;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPPreset> { struct NPPreset *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithPresetID:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
