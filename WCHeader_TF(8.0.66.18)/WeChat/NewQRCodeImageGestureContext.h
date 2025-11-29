@interface NewQRCodeImageGestureContext : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } touchCenterCoordinate;
@property (nonatomic) struct CGSize { double width; double height; } touchImageSize;

@end
