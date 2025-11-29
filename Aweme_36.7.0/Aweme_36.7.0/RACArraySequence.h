@class NSArray;

@interface RACArraySequence : RACSequence

@property (readonly, copy, nonatomic) NSArray *array;
@property (readonly, copy, nonatomic) NSArray *backingArray;
@property (readonly, nonatomic) unsigned long long offset;

+ (id)sequenceWithArray:(id)a0 offset:(unsigned long long)a1;

- (id)tail;
- (id)head;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
