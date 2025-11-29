@class NSString, BDPUniqueID, NSMapTable;

@interface BDPPluginMap : BDPBridgeInstancePlugin <BDPMapViewDelegate, BDPAppRouteChangeMessage> {
    NSMapTable *_componentIDUniqueIDMap;
    NSMapTable *_componentIdTable;
    NSMapTable *_showUserLocationIdTable;
}

@property (nonatomic) long long pageID;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property BOOL pageShowing;
@property BOOL isHasTrackCustomCallout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)formatMapRegion:(id)a0;
+ (id)p_metaDataForParams:(id)a0;
+ (double)formatDoubleValue:(double)a0;

- (void)applicationEnterBackground;
- (void)applicationBecomeActive;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageDidLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)p_subscribeMapRegionChange:(id)a0 mapView:(id)a1 type:(id)a2;
- (void)bdp_mapView:(id)a0 fetchImageForPath:(id)a1 completion:(id /* block */)a2;
- (void)bdp_mapView:(id)a0 didClicked:(id)a1;
- (void)bdp_mapView:(id)a0 regionWillChange:(id)a1;
- (void)bdp_mapView:(id)a0 mapWillMoveByUser:(BOOL)a1;
- (void)bdp_mapView:(id)a0 regionDidChange:(id)a1;
- (void)bdp_mapView:(id)a0 markerDidClicked:(id)a1;
- (void)bdp_mapView:(id)a0 labelViewDidClicked:(id)a1;
- (void)bdp_mapView:(id)a0 anchorPointDidClicked:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)bdp_mapViewUpdated:(id)a0;
- (void)bdp_mapView:(id)a0 calloutViewDidClicked:(id)a1;
- (void)bdp_mapView:(id)a0 showingCustomCalloutPointList:(id)a1 extra:(id)a2;
- (void)bdp_mapView:(id)a0 pointOfInterestDidClicked:(id)a1;
- (void)bdp_mapView:(id)a0 animationEnd:(id)a1 mapId:(id)a2 type:(unsigned long long)a3 callbackId:(id)a4;
- (void)includePointsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)insertMapWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateMapWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeMapWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getCenterLocationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getRegionWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getRotateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getScaleWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getSkewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)moveToLocationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)translateMarkerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)moveAlongWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)screenToMapWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)mapToScreenWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setLocMarkerIconWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openMapAppWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)addGroundOverlayWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateGroundOverlayWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeGroundOverlayWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)tapCustomCalloutWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
