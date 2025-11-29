@class UILabel, MMFinderLiveCommonGuideTipsParams, MMRectTriangleArrowView;

@interface MMFinderLiveCommonGuideTipsView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) MMRectTriangleArrowView *backgroundView;
@property (retain, nonatomic) MMFinderLiveCommonGuideTipsParams *params;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithParams:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)pinToPoint:(struct CGPoint { double x0; double x1; })a0 area:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onSendEvent:(id)a0;
- (void).cxx_destruct;

@end
