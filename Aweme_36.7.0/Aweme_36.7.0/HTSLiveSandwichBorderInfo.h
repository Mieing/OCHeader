@interface HTSLiveSandwichBorderInfo : IESLivePBBaseMessage

@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) double left;
@property (nonatomic) double right;

+ (id)descriptor;

@end
