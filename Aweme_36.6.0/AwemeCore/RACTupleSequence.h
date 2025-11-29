@class NSArray;

@interface RACTupleSequence : RACSequence

@property (readonly, nonatomic) NSArray *tupleBackingArray;
@property (readonly, nonatomic) unsigned long long offset;

+ (id)sequenceWithTupleBackingArray:(id)a0 offset:(unsigned long long)a1;

- (id)tail;
- (id)head;
- (void).cxx_destruct;
- (id)description;
- (id)array;

@end
