@class UIColor, CALayer;

@interface AWEBatManLoadingProgressView : UIView

@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) CALayer *frontLayer;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressBackgroundColor;

- (void)configLayerUI;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
