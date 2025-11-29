@interface NPTTSSlotInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPTTSSlotInfo> { struct NPTTSSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (id)getKeyID;
- (id)getSpeakerID;
- (BOOL)getNeedCaptionInfo;
- (id)getKeyTextUUID;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::NPTTSSlotInfo> { struct NPTTSSlotInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)getSpeed;
- (id)getText;

@end
