@interface IESLiveStackView : UIStackView

@property (copy, nonatomic) id /* block */ willUpdateConstraintsBlock;
@property (copy, nonatomic) id /* block */ didUpdateConstraintsBlock;

+ (void)initialize;

- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
