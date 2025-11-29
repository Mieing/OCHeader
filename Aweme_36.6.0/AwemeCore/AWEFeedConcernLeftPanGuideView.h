@class CAGradientLayer, NSString, UIImageView, YYLabel;

@interface AWEFeedConcernLeftPanGuideView : UIView <AWEFeedConcernLeftPanGuideViewProtocol>

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIImageView *guideImage;
@property (retain, nonatomic) NSString *guideText;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double arrowImageViewTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFrameLayer:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; double x5; struct CGPoint { double x0; double x1; } x6; double x7; double x8; double x9; })a0;
- (void)resetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textIgnoreBlank:(BOOL)a1 textBottomPosition:(double)a2 isAppear:(BOOL)a3;
- (id)maskPath:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; double x5; struct CGPoint { double x0; double x1; } x6; double x7; double x8; double x9; })a0;
- (void)setupLayers;
- (id)__guideText:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
