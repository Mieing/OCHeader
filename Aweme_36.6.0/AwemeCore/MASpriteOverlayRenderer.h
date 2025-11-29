@class UIImage;

@interface MASpriteOverlayRenderer : MAOverlayRenderer {
    BOOL _needUpdate;
}

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coord;
@property (nonatomic) double rotationDegree;
@property (retain, nonatomic) UIImage *textureImage;
@property (nonatomic) struct CGSize { double width; double height; } displaySize;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;

- (void)glRender;
- (void)initializeRendererBridge;
- (void).cxx_destruct;
- (id)init;

@end
