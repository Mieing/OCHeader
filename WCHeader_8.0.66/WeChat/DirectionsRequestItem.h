@interface DirectionsRequestItem : MMObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } begin;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } end;
@property (nonatomic) BOOL useGoogleApi;

@end
