@interface IESLiveCombineFiveTuple : IESLiveCombineTuple

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;
@property (retain, nonatomic) id third;
@property (retain, nonatomic) id fourth;
@property (retain, nonatomic) id fifth;

+ (id)pack:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4;

@end
