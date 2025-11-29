@class NLETrackSlot_OC;

@interface NPApplySlotTarget_OC : NPApplyTarget_OC {
    struct shared_ptr<nle::preset::NPApplySlotTarget> { struct NPApplySlotTarget *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (readonly, nonatomic) NLETrackSlot_OC *slotTarget;

- (struct shared_ptr<nle::preset::NPApplySlotTarget> { struct NPApplySlotTarget *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPApplySlotTarget> { struct NPApplySlotTarget *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
