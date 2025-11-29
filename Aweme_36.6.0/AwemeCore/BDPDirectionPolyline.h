@class MKPolyline, NSString;

@interface BDPDirectionPolyline : NSObject <MKOverlay>

@property (nonatomic) long long type;
@property (retain, nonatomic) MKPolyline *polyline;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPolyline:(id)a0;

@end
