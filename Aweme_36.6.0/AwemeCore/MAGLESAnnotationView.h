@class MASpriteOverlayRenderer, NSData, UIImage, MAObjModelOverlay, MAObjModelOverlayRenderer;

@interface MAGLESAnnotationView : MAAnnotationView {
    MAObjModelOverlay *_objModelOverlay;
    MAObjModelOverlayRenderer *_objModelOverlayRenderer;
    MASpriteOverlayRenderer *_spriteOverlayRenderer;
}

@property (retain, nonatomic) NSData *objModelData;
@property (retain, nonatomic) UIImage *objModelTextureImage;

- (void)glesDraw;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
