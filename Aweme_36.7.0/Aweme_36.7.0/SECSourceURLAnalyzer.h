@class NSArray, SECSourceURLManager, SECLogTools;
@protocol SECSourceURLDataSource;

@interface SECSourceURLAnalyzer : NSObject {
    id<SECSourceURLDataSource> _dataSource;
    double _happenTime;
    SECSourceURLManager *_manager;
    double _expiryInterval;
    NSArray *_logsFromExtractor;
    NSArray *_featureTypes;
    SECLogTools *_logger;
}

- (void)setupAnalyzeFeatures:(id)a0;
- (id)logsFromClassifyResultArray:(id)a0;
- (void)runExtractorTask;
- (void)runDetectorTask;
- (id)logsFromExtractor;
- (BOOL)runLogFilter:(id)a0 withRules:(id)a1;
- (id)logsFromClassifyResult:(id)a0;
- (BOOL)shouldIgnoreRelatedLog:(id)a0 withValue:(id)a1;
- (id)buildupLog;
- (void)runWithWorkQueue:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)setup;

@end
