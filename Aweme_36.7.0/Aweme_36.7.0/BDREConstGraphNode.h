@interface BDREConstGraphNode : BDREGraphNode

@property (readonly, nonatomic) id value;

- (id)valueWithFootPrint:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;

@end
