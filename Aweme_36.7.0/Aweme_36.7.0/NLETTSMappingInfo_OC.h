@class NSString;

@interface NLETTSMappingInfo_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETTSMappingInfo> { struct NLETTSMappingInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppModel;
@property (copy, nonatomic) NSString *keyUUID;
@property (copy, nonatomic) NSString *audioKeyUUID;
@property (copy, nonatomic) NSString *audioSpeakerID;
@property (nonatomic) float audioSpeed;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETTSMappingInfo> { struct NLETTSMappingInfo *x0; struct __shared_weak_count *x1; })a0;
- (id)AudioSpeakerID;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
