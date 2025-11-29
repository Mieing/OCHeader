@class UIColor, UIImage, LynxUI;

@interface LynxBoxShadowLayer : CALayer {
    UIImage *_image;
    BOOL _invalidated;
    BOOL _recreateLayerContents;
}

@property (retain, nonatomic) UIColor *customShadowColor;
@property (nonatomic) double customShadowBlur;
@property (nonatomic) struct CGSize { double width; double height; } customShadowOffset;
@property (nonatomic) struct CGPath { } *maskPath;
@property (nonatomic) struct CGPath { } *customShadowPath;
@property (weak, nonatomic) LynxUI *ui;
@property (nonatomic) BOOL inset;

+ (void)doRender:(struct CGContext { } *)a0 withShadowColor:(struct CGColor { } *)a1 andBlurRadius:(double)a2 andOffset:(struct CGSize { double x0; double x1; })a3 andPath:(struct CGPath { } *)a4 andMaskPath:(struct CGPath { } *)a5 isInset:(BOOL)a6;

- (id)initWithUi:(id)a0;
- (void)onDraw;
- (void).cxx_destruct;
- (void)invalidate;
- (void)display;
- (void)setImage:(id)a0;
- (id)init;
- (void)dealloc;

@end
