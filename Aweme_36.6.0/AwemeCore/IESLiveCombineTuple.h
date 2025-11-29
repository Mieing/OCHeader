@class NSArray;

@interface IESLiveCombineTuple : NSObject

@property (retain, nonatomic) NSArray *objects;
@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;
@property (retain, nonatomic) id third;
@property (retain, nonatomic) id fourth;
@property (retain, nonatomic) id fifth;

+ (id)tupleWithObjectsFromArray:(id)a0 convertNullsToNils:(BOOL)a1;
+ (id)tupleWithObjectsFromArray:(id)a0;

- (id)initWithBackingArray:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
