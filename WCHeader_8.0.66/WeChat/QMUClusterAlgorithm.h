@class NSMutableString, NSMutableSet, QMUPointQuadTree, NSMutableArray, QMapView;
@protocol QMUClusterAlgorithmProtocol;

@interface QMUClusterAlgorithm : NSObject

@property (weak, nonatomic) QMUPointQuadTree *tree;
@property (weak, nonatomic) NSMutableSet *items;
@property (retain, nonatomic) NSMutableArray *preItems;
@property (retain, nonatomic) NSMutableString *preZoomlevel;
@property (nonatomic) double distance;
@property (weak, nonatomic) QMapView *map;
@property (weak, nonatomic) id<QMUClusterAlgorithmProtocol> delegate;

- (id)initWithDateStorer:(id)a0 originData:(id)a1;
- (double)meterPerCGPointAtZoom:(double)a0;
- (double)distanceBetween:(id)a0 and:(id)a1;
- (struct { double x0; double x1; double x2; double x3; })getBound:(id)a0;
- (void)refreshCluster;
- (id)getItemsToBeClustered;
- (id)getClusters;
- (void)resetState;
- (void).cxx_destruct;

@end
