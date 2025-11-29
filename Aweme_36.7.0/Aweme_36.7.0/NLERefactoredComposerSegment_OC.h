@interface NLERefactoredComposerSegment_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERefactoredComposerSegment> { struct NLERefactoredComposerSegment *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) BOOL saveInTemplate;
@property (nonatomic) long long fixedTime;
@property (nonatomic) BOOL isDynamic;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERefactoredComposerSegment> { struct NLERefactoredComposerSegment *x0; struct __shared_weak_count *x1; })a0;
- (id)getRefactoredComposerSegmentItems;
- (void)addRefactoredComposerSegmentItem:(id)a0;
- (void)clearRefactoredComposerSegmentItems;
- (void)removeRefactoredComposerSegmentItem:(id)a0;
- (id)getResNode;
- (id)init;

@end
