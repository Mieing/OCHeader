@class NSData;

@interface RACIndexSetSequence : RACSequence

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) const unsigned long long *indexes;
@property (readonly, nonatomic) unsigned long long count;

+ (id)sequenceWithIndexSetSequence:(id)a0 offset:(unsigned long long)a1;
+ (id)sequenceWithIndexSet:(id)a0;

- (id)tail;
- (id)head;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;

@end
