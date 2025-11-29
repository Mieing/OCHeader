@class UIImage, MAMultiPointOverlay, MAMultiPointItem;
@protocol MAMultiPointOverlayRendererDelegate;

@interface MAMultiPointOverlayRenderer : MAOverlayRenderer

@property (retain, nonatomic) MAMultiPointItem *selectedItem;
@property (weak, nonatomic) id<MAMultiPointOverlayRendererDelegate> delegate;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } pointSize;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (readonly, nonatomic) MAMultiPointOverlay *multiPointOverlay;

- (void)glRender;
- (void)willRemove;
- (void)initializeRendererBridge;
- (void)onTappedWithPoint:(struct MAMapPoint { double x0; double x1; })a0;
- (id)initWithMultiPointOverlay:(id)a0;
- (void).cxx_destruct;

@end
