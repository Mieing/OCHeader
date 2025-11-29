@class NSString, UIImageView, UIImage, NSMutableArray;

@interface EditImageMosaicBrushView : EditImageUIView <WCEditImageTraceViewProtocol> {
    UIImage *_img;
    UIImageView *_imageView;
    double _lineWidth;
    BOOL _initial;
    double _minDis;
    NSMutableArray *_pointArray;
    UIImage *_cacheImg;
}

@property (nonatomic) struct CGPath { } *path;
@property (nonatomic, getter=isHighLight) BOOL highLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withToolType:(int)a1 lineWidth:(double)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawMosaicAtPoint:(struct CGPoint { double x0; double x1; })a0 withColor:(id)a1 withRotation:(double)a2;
- (void)updateDrawPathWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)draw;
- (void)updateCachedImage;
- (BOOL)isViewPathContainPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)highLightPenTraceAtPointIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)setPenTraceViewHighLight:(BOOL)a0;
- (BOOL)isPenTraceViewHighLight;
- (void).cxx_destruct;

@end
