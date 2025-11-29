@class UILabel, IESECSKUNewPriceView;

@interface IESECSKUNewPriceWithSupplementView : IESECSKUNewPriceView

@property (retain, nonatomic) IESECSKUNewPriceView *innerPrice;
@property (retain, nonatomic) UILabel *supplementLabel;

+ (struct CGSize { double x0; double x1; })sizeWithPrice:(id)a0 withType:(long long)a1;

- (void)updateWithPrice:(id)a0 withType:(long long)a1;
- (void).cxx_destruct;

@end
