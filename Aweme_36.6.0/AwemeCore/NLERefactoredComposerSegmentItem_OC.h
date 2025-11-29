@class NSDictionary, NLEResourceNode_OC;

@interface NLERefactoredComposerSegmentItem_OC : NLENode_OC

@property (nonatomic) unsigned long long aek_filterType;
@property (nonatomic) unsigned long long aek_resourceType;
@property (nonatomic) long long aek_detailType;
@property (nonatomic) long long aek_labelID;
@property (copy, nonatomic) NSDictionary *aek_noEffectFeatures;
@property (nonatomic) struct shared_ptr<cut::model::NLERefactoredComposerSegmentItem> { struct NLERefactoredComposerSegmentItem *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *resource;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL isVisible;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERefactoredComposerSegmentItem> { struct NLERefactoredComposerSegmentItem *x0; struct __shared_weak_count *x1; })a0;
- (id)getAttributes;
- (void)clearAttribute;
- (id)getRenderCacheList;
- (void)clearRenderCacheList;
- (void)addRenderCache:(id)a0;
- (void)removeRenderCache:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addAttribute:(id)a0;
- (void)removeAttribute:(id)a0;

@end
