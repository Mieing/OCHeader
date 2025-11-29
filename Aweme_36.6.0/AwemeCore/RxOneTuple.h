@interface RxOneTuple : RxTuple

@property (readonly, nonatomic) id first;

+ (id)pack:(id)a0;

- (id)tupleByAddingObject:(id)a0;
- (id)__initWithBackingStore:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
