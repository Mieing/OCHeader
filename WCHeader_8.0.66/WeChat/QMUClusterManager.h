@class NSString, NSMutableSet, QMUPointQuadTree, QMUUnivisalClusterAlgorithm, QMapView;
@protocol QMUClusterProtocol;

@interface QMUClusterManager : NSObject <QMapViewDelegate, QMUClusterAlgorithmProtocol>

@property (retain, nonatomic) QMUPointQuadTree *tree;
@property (retain, nonatomic) NSMutableSet *items;
@property (retain, nonatomic) QMUUnivisalClusterAlgorithm *clusterStrategy;
@property (nonatomic) double distance;
@property (weak, nonatomic) id<QMUClusterProtocol> delegate;
@property (weak, nonatomic) QMapView *map;
@property (nonatomic) int thresholdZoomlevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMap:(id)a0;
- (void)dealloc;
- (void)onRegionChanged:(id)a0;
- (void)refreshCluster;
- (BOOL)algorithm:(id)a0 clusterAnnotation:(id)a1 withAnnotation:(id)a2;
- (void)addAnnotaion:(id)a0;
- (void)removeAnnotations:(id)a0;
- (void)removeAnnotaion:(id)a0;
- (void)addAnnotations:(id)a0;
- (void)clearAnnotations;
- (void)doAdd:(id)a0;
- (void)doRemove:(id)a0;
- (void).cxx_destruct;

@end
