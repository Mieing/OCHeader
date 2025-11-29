@class NPBaseSlotInfo_OC, NPEffectSlotInfo_OC;

@interface NPSlotChangeInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::SlotChangeInfo> { struct SlotChangeInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (readonly, nonatomic) NPBaseSlotInfo_OC *slotInfoOri;
@property (readonly, nonatomic) NPBaseSlotInfo_OC *slotInfoNew;
@property (readonly, nonatomic) NPEffectSlotInfo_OC *effectSlotInfo;
@property (readonly, nonatomic) unsigned long long slotChangeType;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::SlotChangeInfo> { struct SlotChangeInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSlotID:(id)a0;

@end
