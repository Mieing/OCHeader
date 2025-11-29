@class NSString, UIImage;

@interface WAMapGroundOverlay : QGroundOverlay

@property (nonatomic) long long overlayId;
@property (nonatomic) long long displayLevel;
@property (nonatomic) int zIndex;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } northEast; struct CLLocationCoordinate2D { double latitude; double longitude; } southWest; } bounds;
@property (retain, nonatomic) NSString *iconSrc;
@property (retain, nonatomic) UIImage *icon;

- (void).cxx_destruct;

@end
