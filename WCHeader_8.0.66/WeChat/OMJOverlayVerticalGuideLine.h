@class UIView;

@interface OMJOverlayVerticalGuideLine : OMJOverlayGuideLine

@property (retain, nonatomic) UIView *lineTop;
@property (retain, nonatomic) UIView *lineBottom;

- (void)commonInit;
- (void)configWithGuideLineStyle:(id)a0;
- (void).cxx_destruct;

@end
