@class UIColor;

@interface QNavigationGravityLine : NSObject

@property (nonatomic) double width;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } destination;

- (void).cxx_destruct;

@end
