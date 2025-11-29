@interface RACFourTuple : RACTuple

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;
@property (readonly, nonatomic) id third;
@property (readonly, nonatomic) id fourth;

+ (id)pack:(id)a0 :(id)a1 :(id)a2 :(id)a3;

- (id)initWithBackingArray:(id)a0;
- (id)tupleByAddingObject:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
