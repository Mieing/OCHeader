@interface QMUInScreenClusterAlgorithm : QMUClusterAlgorithm

- (struct { double x0; double x1; double x2; double x3; })getScreenBound:(id)a0;
- (void)refreshCluster;
- (void)doWhenRegionChanged;
- (id)getItemsToBeClustered;

@end
