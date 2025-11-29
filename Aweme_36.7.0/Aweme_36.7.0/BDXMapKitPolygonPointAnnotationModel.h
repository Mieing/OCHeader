@class UIColor, NSString;

@interface BDXMapKitPolygonPointAnnotationModel : NSObject <MKAnnotation>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property BOOL isVertex;
@property (retain) UIColor *fillColor;
@property (retain) UIColor *strokeColor;
@property double lineWidth;
@property (nonatomic) double annotationViewWH;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)changeToVertexPoint;
- (void).cxx_destruct;
- (id)init;

@end
