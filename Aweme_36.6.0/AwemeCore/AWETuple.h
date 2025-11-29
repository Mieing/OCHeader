@class NSArray;

@interface AWETuple : NSObject <NSCoding, NSCopying, NSFastEnumeration>

@property (readonly, nonatomic) NSArray *backingArray;
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

- (id)initWithBackingArray:(id)a0;
- (id)tupleByAddingObject:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)allObjects;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
