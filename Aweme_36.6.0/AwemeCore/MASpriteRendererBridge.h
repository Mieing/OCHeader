@class UIImage;

@interface MASpriteRendererBridge : MABaseRendererBridge {
    void *_marker;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coord;
@property (nonatomic) double rotationDegree;
@property (retain, nonatomic) UIImage *textureImage;
@property (nonatomic) struct CGSize { double width; double height; } displaySize;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAlpha:(double)a0;

@end
