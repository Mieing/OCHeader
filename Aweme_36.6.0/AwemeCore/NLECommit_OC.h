@interface NLECommit_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLECommit> { struct NLECommit *x0; struct __shared_weak_count *x1; } cppValue;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLECommit> { struct NLECommit *x0; struct __shared_weak_count *x1; })a0;
- (long long)getTimeStamp;
- (void)setVersion:(long long)a0;
- (id)init;
- (id)getDescription;
- (id)getModel;
- (long long)getVersion;
- (void)setTimeStamp:(long long)a0;
- (void)setDescription:(id)a0;

@end
