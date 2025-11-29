@interface NPAIGCSlotInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPAIGCSlotInfo> { struct NPAIGCSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (BOOL)needAIAvatar;
- (id)getKeyID;
- (id)getPreAIGCID;
- (id)getPreAIGCPath;
- (id)getOriginFilePath;
- (id)getMaterials;
- (unsigned long long)getAIType;
- (id)getAbsolutePreAIGCPath;
- (id)getPreAIGCParams;
- (id)getSlotID;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::NPAIGCSlotInfo> { struct NPAIGCSlotInfo *x0; struct __shared_weak_count *x1; })a0;
- (id)getDetectID;
- (id)getPreAIGCWorkflow;
- (int)getDetectType;
- (BOOL)isAsyncRequest;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
