@class CAShapeLayer;

@interface AWEIMMessageSendProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *baseLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) double width;
@property (nonatomic) double progress;

- (void)p_updateProgress;
- (void)iesim_themeReload:(id)a0;
- (void)p_setupThemeDynamicConfig;
- (void)p_updateColor;
- (id)initWithWidth:(double)a0 lineWidth:(double)a1 strokeColor:(id)a2 baseStrokeColor:(id)a3;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithWidth:(double)a0;
- (void)layoutSubviews;

@end
