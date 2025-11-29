@class MMUILabel;

@interface WCCardChooseSubPeopleLabelView : MMUIView

@property (retain, nonatomic) MMUILabel *mainLabel;
@property (retain, nonatomic) MMUILabel *subLabel;
@property (nonatomic) double maxWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
