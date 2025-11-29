@class UIColor, NSString, UILabel, CALayer;

@interface EditImageAnimatedTextTool : EditImageAnimatedWidgetTool {
    UILabel *m_layerView;
    CALayer *m_textLayer;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *strokerColor;
@property (nonatomic) double maxWidth;
@property (nonatomic) double maxFontSize;
@property (nonatomic) double minFontSize;
@property (retain, nonatomic) NSString *inputHint;
@property (nonatomic) BOOL editable;

+ (id)labelForInputHintLaylerWithFontSize:(double)a0;
+ (id)labelForCaptionWithFontSize:(double)a0 borderColor:(id)a1;
+ (id)defaultFontOfSize:(double)a0;
+ (id)fontArrayOfSize:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangeText:(id)a0 color:(id)a1;
- (id)exportAnimatedLayerWithTimingObject:(id)a0;
- (id)textLayerWithCustomLayer:(BOOL)a0 timingObject:(id)a1;
- (BOOL)startEditingText;
- (double)widgetViewBorder;
- (double)widgetWidth;
- (double)widgetHeight;
- (void)handleTapGesture:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)handlePinchGesture:(id)a0;
- (void)handleRotateGesture:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
