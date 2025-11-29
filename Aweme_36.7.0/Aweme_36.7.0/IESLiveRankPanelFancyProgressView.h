@class CALayer, UIColor;

@interface IESLiveRankPanelFancyProgressView : UIView

@property (retain, nonatomic) CALayer *frontLayer;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isGradient;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *frontColor;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;

- (void)_configSublayers;
- (void)_updateProgressLayerBounds;
- (id)initWithBackgroundColor:(id)a0 frontColor:(id)a1 isGradient:(BOOL)a2 startColor:(id)a3 endColor:(id)a4;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)updateProgress:(double)a0;

@end
