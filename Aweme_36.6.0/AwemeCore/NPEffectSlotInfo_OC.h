@interface NPEffectSlotInfo_OC : NPBaseSlotInfo_OC {
    struct shared_ptr<nle::preset::NPEffectSlotInfo> { struct NPEffectSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (nonatomic) struct shared_ptr<nle::preset::NPEffectSlotInfo> { struct NPEffectSlotInfo *x0; struct __shared_weak_count *x1; } cppValue;
@property (readonly, nonatomic) unsigned long long effectSlotType;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPEffectSlotInfo> { struct NPEffectSlotInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
