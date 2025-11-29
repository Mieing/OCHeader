@interface RACUnarySequence : RACSequence

@property (retain, nonatomic) id head;

+ (id)return:(id)a0;

- (id)tail;
- (void).cxx_destruct;
- (id)description;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)bind:(id /* block */)a0;

@end
