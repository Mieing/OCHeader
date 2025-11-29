@interface NPTextParamSlotInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPTextParamSlotInfo> { struct NPTextParamSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (id)getKeyID;
- (id)getKeyUUID;
- (id)getTextTagList;
- (id)getCaptionDuration;
- (id)getEffectId;
- (id)getWidgetNames;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::NPTextParamSlotInfo> { struct NPTextParamSlotInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getText;

@end
