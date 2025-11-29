@class UIColor, CATextLayer, CAShapeLayer;

@interface MAOfflineMapProgressView : UIView {
    CAShapeLayer *_lineLayer;
    CATextLayer *_textLayer;
}

@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double progress;

- (void)setupLayers;
- (void)updateLineLayer;
- (void)updateTextLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
