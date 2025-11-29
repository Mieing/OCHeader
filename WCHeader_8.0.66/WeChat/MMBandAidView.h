@class NSLayoutConstraint, UIView;

@interface MMBandAidView : UIView

@property (retain, nonatomic) id child;
@property (retain, nonatomic) UIView *leftPart;
@property (retain, nonatomic) UIView *rightPart;
@property (retain, nonatomic) NSLayoutConstraint *leftPartRightToChildLeft;
@property (retain, nonatomic) NSLayoutConstraint *rightPartLeftToChildRight;
@property (nonatomic) double cornerToChild;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithChild:(id)a0;
- (void).cxx_destruct;

@end
