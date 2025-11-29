@class UIColor, NSString, UIImage, CALayer;
@protocol MACompassViewDelegate;

@interface MACompassView : UIView {
    float _scale;
    UIColor *_bgColor;
    UIColor *_ticColor;
    UIColor *_arrowColor;
    NSString *_nString;
    float _fontSize;
    CALayer *_baseLayer;
    CALayer *_rotateLayer;
    CALayer *_imageLayer;
}

@property (weak, nonatomic) id<MACompassViewDelegate> delegate;
@property (nonatomic) float degree;
@property (retain, nonatomic) UIImage *image;

+ (id)compassViewWithDegree:(float)a0;

- (void)initAttributes;
- (void)initBaseLayer;
- (void)initTicLayer;
- (void)initArrowLayer;
- (void)initTextLayer;
- (void)onCompassTapped;
- (void)setDegree:(float)a0 animated:(BOOL)a1 duration:(double)a2;
- (void)updateOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initGesture;

@end
