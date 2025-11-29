@class NSString, BDXLynxMapBridgeModel;

@interface MAShape : MABaseOverlay <MAAnnotation>

@property (retain, nonatomic) BDXLynxMapBridgeModel *bdx_model;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
