@class NSArray, NSEnumerator;

@interface RACSequence : RACStream <NSCoding, NSCopying, NSFastEnumeration>

@property (readonly, nonatomic) id head;
@property (readonly, nonatomic) RACSequence *tail;
@property (readonly, copy, nonatomic) NSArray *array;
@property (readonly, copy, nonatomic) NSEnumerator *objectEnumerator;
@property (readonly, copy, nonatomic) RACSequence *eagerSequence;
@property (readonly, copy, nonatomic) RACSequence *lazySequence;

+ (id)sequenceWithHeadBlock:(id /* block */)a0 tailBlock:(id /* block */)a1;
+ (id)return:(id)a0;
+ (id)empty;

- (id)foldRightWithStart:(id)a0 reduce:(id /* block */)a1;
- (id)bind:(id /* block */)a0 passingThroughValuesFromSequence:(id)a1;
- (id)signalWithScheduler:(id)a0;
- (id)foldLeftWithStart:(id)a0 reduce:(id /* block */)a1;
- (id)zipWith:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)all:(id /* block */)a0;
- (id)concat:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)any:(id /* block */)a0;
- (id)signal;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectPassingTest:(id /* block */)a0;
- (id)bind:(id /* block */)a0;

@end
