@class NSString, NSArray, NLESlotInfo_OC, NLERandomSlotInfo_OC;

@interface NLEMappingNode_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEMappingNode> { struct NLEMappingNode *__ptr_; struct __shared_weak_count *__cntrl_; } cppMappingNode;
@property (copy, nonatomic) NSString *keyClassName;
@property (copy, nonatomic) NSString *keyUUID;
@property (copy, nonatomic) NSString *reproductionID;
@property (copy, nonatomic) NSString *preAIGCId;
@property (copy, nonatomic) NSString *preAIGCPath;
@property (nonatomic) long long detectType;
@property (copy, nonatomic) NSString *detectId;
@property (copy, nonatomic) NSString *preAIGCParPath;
@property (copy, nonatomic) NSString *preAIGCI2V;
@property (nonatomic) long long SlotDecodeMode;
@property (retain, nonatomic) NSArray *aiInfos;
@property (retain, nonatomic) NSArray *ttsInfos;
@property (retain, nonatomic) NLESlotInfo_OC *slotInfo;
@property (nonatomic) BOOL adaptiveAIImage;
@property (nonatomic) BOOL aiAsyncRequest;
@property (retain, nonatomic) NSArray *customInfos;
@property (copy, nonatomic) NSString *urs;
@property (nonatomic) BOOL isExtraSlot;
@property (retain, nonatomic) NLERandomSlotInfo_OC *randomSlotInfo;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEMappingNode> { struct NLEMappingNode *x0; struct __shared_weak_count *x1; })a0;
- (id)PreAIGCI2V;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
