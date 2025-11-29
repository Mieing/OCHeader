@class UIImage, BDXLynxBaseSvgUI;

@interface BDXLynxSvgView : UIView

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL recreateLayerContents;
@property (nonatomic) BOOL invalidated;
@property (weak, nonatomic) BDXLynxBaseSvgUI *ui;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andUI:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)displayLayer:(id)a0;

@end
