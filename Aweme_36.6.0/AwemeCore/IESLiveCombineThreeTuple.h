@interface IESLiveCombineThreeTuple : IESLiveCombineTuple

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;
@property (retain, nonatomic) id third;

+ (id)pack:(id)a0 :(id)a1 :(id)a2;

@end
