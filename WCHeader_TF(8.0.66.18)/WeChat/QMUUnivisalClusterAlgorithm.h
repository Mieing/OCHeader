@class QMUInScreenClusterAlgorithm, QMUWorldClusterAlgorithm;

@interface QMUUnivisalClusterAlgorithm : QMUClusterAlgorithm

@property (retain, nonatomic) QMUInScreenClusterAlgorithm *highLevel;
@property (retain, nonatomic) QMUWorldClusterAlgorithm *lowLevel;
@property (nonatomic) int thresholdZoomlevel;

- (id)initWithDateStorer:(id)a0 originData:(id)a1;
- (void)refreshCluster;
- (double)distance;
- (void)setDistance:(double)a0;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)map;
- (void)setMap:(id)a0;
- (void).cxx_destruct;

@end
