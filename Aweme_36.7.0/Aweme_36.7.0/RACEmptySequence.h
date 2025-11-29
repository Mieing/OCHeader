@interface RACEmptySequence : RACSequence

+ (id)empty;

- (id)bind:(id /* block */)a0 passingThroughValuesFromSequence:(id)a1;
- (id)tail;
- (id)head;
- (id)description;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
