@class NLERefactoredComposerSegment_OC;

@interface NLERefactoredComposerFilter_OC : NLETimeSpaceNode_OC

@property (nonatomic) unsigned long long aek_filterType;
@property (nonatomic) long long aek_detailType;
@property (nonatomic) struct shared_ptr<cut::model::NLERefactoredComposerFilter> { struct NLERefactoredComposerFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLERefactoredComposerSegment_OC *segment;

@end
