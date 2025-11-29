@class CALayer, UIColor;

@interface IESLiveXPlayGameProgressView : UIView

@property (retain, nonatomic) CALayer *frontLayer;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *progressColor;

- (void)_configSublayers;
- (void)_updateProgressLayerBounds;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateProgress:(double)a0;

@end
