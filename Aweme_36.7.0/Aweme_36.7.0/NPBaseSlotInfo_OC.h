@class NSString;

@interface NPBaseSlotInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPBaseSlotInfo> { struct NPBaseSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (readonly, copy, nonatomic) NSString *slotID;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPBaseSlotInfo> { struct NPBaseSlotInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
