@class NSArray;

@interface RxTuple : NSObject <NSCopying, NSCoding, NSFastEnumeration>

@property (readonly, nonatomic) NSArray *backingStore;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;
@property (readonly, nonatomic) id third;
@property (readonly, nonatomic) id fourth;
@property (readonly, nonatomic) id fifth;
@property (readonly, nonatomic) id last;

+ (id)tupleWithObjectsFromArray:(id)a0 convertNullsToNils:(BOOL)a1;
+ (id)tupleWithObjectsFromArray:(id)a0;
+ (id)tupleWithObjects:(id)a0;

- (id)tupleByAddingObject:(id)a0;
- (id)__initWithBackingStore:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
