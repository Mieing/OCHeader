@class DolphinRerankService, NSDictionary, DolphinRerankConfiguration, DolphinRerankContext;

@interface DolphinRerankBaseTask : DolphinBaseTask

@property (copy, nonatomic) NSDictionary *inputDict;
@property (readonly, nonatomic) DolphinRerankService *service;
@property (readonly, nonatomic) DolphinRerankConfiguration *configuration;
@property (readonly, nonatomic) DolphinRerankContext *rerankContext;

- (id)helpAnalyzeNewIdxIndexes:(long long)a0 newModel:(id)a1;
- (void)helpMakeDifferenceFrom:(id)a0 to:(id)a1;
- (void).cxx_destruct;

@end
