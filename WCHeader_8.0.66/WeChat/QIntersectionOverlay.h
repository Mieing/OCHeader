@class NSData, QIntersectionOverlayManager, QIntersectionOverlayHandler;

@interface QIntersectionOverlay : NSObject

@property (weak, nonatomic) QIntersectionOverlayManager *container;
@property (retain, nonatomic) QIntersectionOverlayHandler *handler;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL isDayMode;
@property (nonatomic) BOOL roundedCorner;
@property (nonatomic) unsigned long long leftTopCornerRadius;
@property (nonatomic) unsigned long long rightTopCornerRadius;
@property (nonatomic) unsigned long long leftBottomCornerRadius;
@property (nonatomic) unsigned long long rightBottomCornerRadius;

- (void).cxx_destruct;

@end
