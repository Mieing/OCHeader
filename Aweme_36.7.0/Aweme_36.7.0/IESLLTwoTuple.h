@interface IESLLTwoTuple : IESLLTuple

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

+ (id)pack:(id)a0 :(id)a1;

- (id)initWithBackingArray:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
