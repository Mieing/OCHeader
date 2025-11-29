@interface BDREConstNode : BDREBaseNode

@property (retain, nonatomic) id constValue;

- (id)initWithConstValue:(id)a0 originValue:(id)a1 index:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)getValue;

@end
