@class NSString, NLEResourceNode_OC;

@interface NLEMVExternalAlgorithmResult_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEMVExternalAlgorithmResult> { struct NLEMVExternalAlgorithmResult *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *photo;
@property (retain, nonatomic) NLEResourceNode_OC *mask;
@property (copy, nonatomic) NSString *algorithmName;
@property (nonatomic) unsigned long long resultInType;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEMVExternalAlgorithmResult> { struct NLEMVExternalAlgorithmResult *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
