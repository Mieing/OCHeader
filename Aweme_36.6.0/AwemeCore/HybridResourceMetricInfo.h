@interface HybridResourceMetricInfo : NSObject

@property (nonatomic) double loadCostTime;
@property (nonatomic) double parseCostTime;
@property (nonatomic) double configMergeCostTime;
@property (nonatomic) double createPipelineCostTime;
@property (nonatomic) double memoryCostTime;
@property (nonatomic) double geckoCostTime;
@property (nonatomic) double geckoUpdateCostTime;
@property (nonatomic) double geckoTotalCostTime;
@property (nonatomic) double cdnCacheCostTime;
@property (nonatomic) double cdnCostTime;
@property (nonatomic) double cdnTotalCostTime;
@property (nonatomic) double builtinCostTime;

- (id)initWithTaskConfig:(id)a0 resourceProvider:(id)a1;
- (id)getMetricInfo;

@end
