@class UIImage, BDPMapGroundOverlayModel, NSString;

@interface BDPMapkitMapGroundOverlay : NSObject <MKOverlay>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) BDPMapGroundOverlayModel *model;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 image:(id)a1;
- (void).cxx_destruct;

@end
