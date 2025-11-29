@interface NPCustomSlotInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPCustomSlotInfo> { struct NPCustomSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (id)getExtraForKey:(id)a0;
- (id)infoGroup;
- (id)getSlotID;
- (id)infoFormatter;
- (id)getWidgetName;
- (id)getCacheKey;
- (id)getMaterialPath;
- (id)getEffectPath;
- (id)getInfoTag;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::NPCustomSlotInfo> { struct NPCustomSlotInfo *x0; struct __shared_weak_count *x1; })a0;
- (id)getSlotType;
- (long long)getInfoIndex;
- (id)getMaterialID;
- (id)getUrs;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })originalSize;
- (id).cxx_construct;
- (id)infoType;

@end
