@interface BDXResourceLoaderMetricModel : NSObject

@property (nonatomic) double res_load_start;
@property (nonatomic) double res_load_finish;
@property (nonatomic) double init_start;
@property (nonatomic) double init_finish;
@property (nonatomic) double memory_start;
@property (nonatomic) double memory_finish;
@property (nonatomic) double gecko_total_start;
@property (nonatomic) double gecko_total_finish;
@property (nonatomic) double gecko_start;
@property (nonatomic) double gecko_finish;
@property (nonatomic) double gecko_update_start;
@property (nonatomic) double gecko_update_finish;
@property (nonatomic) double cdn_total_start;
@property (nonatomic) double cdn_total_finish;
@property (nonatomic) double cdn_cache_start;
@property (nonatomic) double cdn_cache_finish;
@property (nonatomic) double cdn_start;
@property (nonatomic) double cdn_finish;
@property (nonatomic) double builtin_start;
@property (nonatomic) double builtin_finish;

@end
