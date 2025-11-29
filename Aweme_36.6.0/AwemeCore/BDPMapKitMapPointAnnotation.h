@class NSString, BDPMapMarkerModel;

@interface BDPMapKitMapPointAnnotation : NSObject <MKAnnotation>

@property (retain, nonatomic) BDPMapMarkerModel *markerModel;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
