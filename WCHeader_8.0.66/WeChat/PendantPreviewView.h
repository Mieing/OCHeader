@class EditImageAnimatedTextTool, EmoticonLensDynamicTipView, UIImageView, CAShapeLayer, CALayer;

@interface PendantPreviewView : UIView

@property (retain, nonatomic) EditImageAnimatedTextTool *textView;
@property (nonatomic) long long previewType;
@property (retain, nonatomic) EmoticonLensDynamicTipView *actionTipView;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CALayer *previewLayer;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0 textColor:(id)a1 strokeColor:(id)a2;
- (void)showLensActionTips:(id)a0;
- (void)setupPreviewLayer:(id)a0;
- (void)showPlaceholderImage:(id)a0;
- (void)updateTextPosition;
- (void)updateMaskLayerWithVisiableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(double)a1;
- (void)switchScene:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visiableAreaForScene:(long long)a0;
- (void).cxx_destruct;

@end
