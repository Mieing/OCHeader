@class QAOIMarkerManager, NSString, QAOILayerPolygonView, NSMutableArray;

@interface QAOILayer : NSObject

@property (nonatomic) double internalMinZoom;
@property (nonatomic) double internalMaxZoom;
@property (retain, nonatomic) NSMutableArray *markers;
@property (retain, nonatomic) QAOILayerPolygonView *polygonView;
@property (retain, nonatomic) NSString *uid;
@property (weak, nonatomic) QAOIMarkerManager *manager;
@property (nonatomic) double minZoom;
@property (nonatomic) double maxZoom;

- (id)initWithUID:(id)a0;
- (void)showSubPois:(BOOL)a0;
- (void).cxx_destruct;

@end
