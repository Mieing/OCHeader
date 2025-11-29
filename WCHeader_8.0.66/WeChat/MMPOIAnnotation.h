@class POIItem, NSString;

@interface MMPOIAnnotation : MMObject <QAnnotation>

@property (retain, nonatomic) POIItem *poiItem;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) BOOL isUserLocation;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPOIItem:(id)a0;
- (BOOL)hasIndoorInfo;
- (void).cxx_destruct;

@end
