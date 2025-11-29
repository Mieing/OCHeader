@class NSString;

@interface WAWebViewPlugin_EmbedMap : WAWebViewPlugin_embedView <WAMapViewDelegate, WCMainWindowExt> {
    BOOL m_isDarkmodeEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onWeAppEnterBackground:(id)a0;
- (void)onWeAppEnterForeground:(id)a0;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)insertMap:(id)a0 completion:(id /* block */)a1;
- (void)innerInsertMapAfterAuth:(id)a0 showLocation:(BOOL)a1 completion:(id /* block */)a2;
- (id)getMapView:(unsigned int)a0;
- (BOOL)removeMap:(unsigned int)a0;
- (void)sendEvent:(id)a0 param:(id)a1 sendWebview:(BOOL)a2;
- (void)onMarkerClick:(id)a0 data:(id)a1;
- (void)onControlClick:(id)a0 data:(id)a1;
- (void)onRegionWillChange:(id)a0 byAnimate:(BOOL)a1 byGesture:(BOOL)a2;
- (void)onRegionDidChange:(id)a0 reason:(unsigned long long)a1 byAnimate:(BOOL)a2 byGesture:(BOOL)a3;
- (void)onMapTap:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)onMapUserLocationTap:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)onMapCalloutClick:(id)a0 data:(id)a1;
- (void)onMapLabelClick:(id)a0 data:(id)a1;
- (void)onMapPoiClick:(id)a0 poi:(id)a1;
- (void)onMapClusterClick:(id)a0 annotation:(id)a1;
- (void)onMapOverlayClick:(id)a0 overlay:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (void)onMapMarkerClusterCreate:(id)a0 annotation:(id)a1;
- (void)onMapMarkerShowByCollision:(id)a0 markerId:(long long)a1;
- (void)onMapMarkerHideByCollision:(id)a0 markerId:(long long)a1;
- (void)onVisualLayerEvent:(id)a0 inMap:(id)a1 eventType:(id)a2 eventInfoJson:(id)a3;
- (void)onMapAuthSuccess:(id)a0;
- (void)onMapAuthFail:(id)a0 withError:(id)a1;
- (id)makeClusterInfo:(id)a0;
- (id)makeIndoorInfoByMapId:(unsigned int)a0 building:(id)a1 level:(id)a2;
- (void)onMapIndoorChange:(id)a0 building:(id)a1 level:(id)a2;
- (BOOL)enableOverseaServerProtocol;

@end
