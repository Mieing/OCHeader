@interface AWEOneTuple : AWETuple

@property (readonly, nonatomic) id first;

+ (id)pack:(id)a0;

- (id)initWithBackingArray:(id)a0;
- (id)tupleByAddingObject:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
