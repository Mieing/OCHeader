@class TMBPEACollectionReports, TMBPEADataCollectionPipeline, TMBPEACollectionErrorStrategy, TMBPEALimit;

@interface TMBPEADataCollection : TMModule

@property (retain, nonatomic) TMBPEADataCollectionPipeline *pipeline;
@property (retain, nonatomic) TMBPEACollectionErrorStrategy *errorStrategy;
@property (retain, nonatomic) TMBPEACollectionReports *reports;
@property (retain, nonatomic) TMBPEALimit *limit;

- (void)_setupLimit;
- (void)_setupReports;
- (void)_setupErrorStrategy;
- (id)_dataCollectionConfig;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)start;
- (id)initWithConfig:(id)a0;
- (void)_setupPipelines;

@end
