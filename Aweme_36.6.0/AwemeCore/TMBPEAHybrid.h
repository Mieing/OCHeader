@class TMBPEAHybridContext, TMBPEAHybridReporters, TMBPEAHybridPipeline, TMBPEAHybridErrorStrategy;

@interface TMBPEAHybrid : TMModule

@property (retain, nonatomic) TMBPEAHybridPipeline *pipeline;
@property (retain, nonatomic) TMBPEAHybridReporters *reporters;
@property (retain, nonatomic) TMBPEAHybridErrorStrategy *errorStrategy;
@property (retain, nonatomic) TMBPEAHybridContext *bpeaContext;

- (void)_setupReports;
- (void)_setupErrorStrategy;
- (void)_setupBPEAContext;
- (id)_hybridConfig;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)start;
- (id)initWithConfig:(id)a0;
- (void)_setupPipelines;

@end
