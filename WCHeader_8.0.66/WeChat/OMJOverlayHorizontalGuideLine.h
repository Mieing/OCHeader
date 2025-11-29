@class UIView;

@interface OMJOverlayHorizontalGuideLine : OMJOverlayGuideLine

@property (retain, nonatomic) UIView *lineLeft;
@property (retain, nonatomic) UIView *lineRight;

- (void)commonInit;
- (void)configWithGuideLineStyle:(id)a0;
- (void).cxx_destruct;

@end
