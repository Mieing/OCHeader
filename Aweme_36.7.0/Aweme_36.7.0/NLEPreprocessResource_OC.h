@class NSString, NLEResourceNode_OC;

@interface NLEPreprocessResource_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEPreprocessResource> { struct NLEPreprocessResource *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *keyID;
@property (retain, nonatomic) NLEResourceNode_OC *resource;
@property (copy, nonatomic) NSString *stringValue;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLENode> { struct NLENode *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
