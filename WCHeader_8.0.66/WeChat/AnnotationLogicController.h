@class NSArray, NSMutableDictionary, QMapView, MMAddressAnnotation;

@interface AnnotationLogicController : MMObject {
    NSMutableDictionary *_annotationDic;
    QMapView *_mapView;
    MMAddressAnnotation *_addressAnnotation;
}

@property (readonly, nonatomic) NSArray *allUsernames;
@property (readonly, nonatomic) NSArray *allAnnotations;

- (id)initWithMapView:(id)a0;
- (id)addFriendAnnotation:(id)a0;
- (id)getFriendAnnotationWithUsername:(id)a0;
- (void)removeFriendAnnotationWithUsername:(id)a0;
- (void)removeAllFriendAnnoations;
- (id)getUserLocation;
- (id)addMyselfAnnotationWithHeading:(double)a0;
- (id)getMyselfAnnotation;
- (void)removeMyselfAnnotation;
- (id)addAddressAnnotation:(id)a0;
- (id)getAddressAnnotation;
- (void)removeAddressAnnotation;
- (void)setAllHeadAnnotationShowCallout:(BOOL)a0 Animated:(BOOL)a1;
- (void)removeAllHeadAnnotationCalloutAnimation;
- (void)removeAllFriendAnnotationCalloutAnimation;
- (void)onlyShowMe;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })getConvexRegion:(BOOL)a0;
- (void).cxx_destruct;

@end
