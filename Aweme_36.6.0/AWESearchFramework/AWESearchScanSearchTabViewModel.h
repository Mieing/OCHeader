@interface AWESearchScanSearchTabViewModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } detectionRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) BOOL hastracked;

@end
