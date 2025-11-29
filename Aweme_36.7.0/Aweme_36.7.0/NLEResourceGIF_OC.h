@class NSArray;

@interface NLEResourceGIF_OC : NLEResourceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEResourceGIF> { struct NLEResourceGIF *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSArray *resourceFiles;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEResourceGIF> { struct NLEResourceGIF *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
