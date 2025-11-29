@class QOverlayContainer, NSMutableDictionary, QMapContext, QAOILayerMarkerEngine, QMediator, QUniversalMapCounter, NSCache;

@interface QAOIMarkerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *layerHolder;
@property (retain, nonatomic) NSMutableDictionary *markerHolder;
@property (retain, nonatomic) NSMutableDictionary *textMarkerHolder;
@property (retain, nonatomic) NSCache *poiImagePathCache;
@property (weak, nonatomic) QMapContext *context;
@property (weak, nonatomic) QOverlayContainer *overlayContainer;
@property (weak, nonatomic) QMediator *mediator;
@property (weak, nonatomic) QUniversalMapCounter *universalCounter;
@property (retain, nonatomic) QAOILayerMarkerEngine *dataEngine;

- (id)init;
- (void)dealloc;
- (void)requestAOILayerData:(id)a0 callback:(id /* block */)a1;
- (BOOL)loadAOILayerWithInfoDict:(id)a0 withLayer:(id)a1;
- (id)creatPOIMarkersArray:(id)a0 withLayer:(id)a1;
- (void)loadPOIIconImagePath:(id)a0 withLayerID:(id)a1;
- (id)createAOILayerSurface:(id)a0;
- (void)addAOILayerPolygonView:(id)a0 withProperty:(id)a1;
- (void)createAOILayerMarker:(id)a0 withLayerID:(id)a1;
- (void)removeAOILayerMarker:(id)a0;
- (void)addAOILayer:(id)a0 callback:(id /* block */)a1;
- (void)removeAOILayer:(id)a0;
- (id)getPOIMarkerInfoByID:(int)a0;
- (void)modifyAOILayerStatus:(id)a0 hidden:(BOOL)a1;
- (void)showSubPois:(id)a0 toShow:(BOOL)a1;
- (id)getStyleDictionary:(id)a0 withStyle:(int)a1;
- (id)generatePayload:(id)a0;
- (id)getAOILayerMarkerIconPathWithName:(id)a0;
- (id)getImageDownloadURL:(id)a0;
- (void)calculateUltimateZoomLevel:(id)a0;
- (int)getMapStyleType;
- (void)setPOITextImageInstruction:(id)a0;
- (void).cxx_destruct;

@end
