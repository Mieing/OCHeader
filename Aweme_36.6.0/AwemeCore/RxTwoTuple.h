@interface RxTwoTuple : RxTuple

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

+ (id)pack:(id)a0 :(id)a1;

- (id)tupleByAddingObject:(id)a0;
- (id)__initWithBackingStore:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
