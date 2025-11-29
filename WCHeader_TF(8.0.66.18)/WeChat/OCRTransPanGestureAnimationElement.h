@interface OCRTransPanGestureAnimationElement : NSObject

@property (nonatomic) double exitViewTopAtPanBegin;
@property (nonatomic) double previousPanPositionX;
@property (nonatomic) double zoomScaleAtPanBegin;
@property (nonatomic) struct CGPoint { double x; double y; } scrollOffsetAtPanBegin;
@property (nonatomic) struct CGSize { double width; double height; } imageSizeAtPanBegin;
@property (nonatomic) struct CGPoint { double x; double y; } imageOriginAtPanBegin;

@end
