@class NSString;
@protocol MMAddressAnnotationDelegate;

@interface MMAddressAnnotation : MMObject <QAnnotation, ILocationMgrExt> {
    unsigned long long _geoTag;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;
@property (weak, nonatomic) id<MMAddressAnnotationDelegate> m_delegate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 Location:(id)a1 POIName:(id)a2;
- (void)safeDeleteGeocoder;
- (void)createNewRequest;
- (void)onDidFindAddress:(id)a0 forTag:(unsigned long long)a1;
- (void).cxx_destruct;

@end
