@class NSString;

@interface IESLLPOIDetailDataCacheExtension : IESLLPOIBaseExtension

@property (nonatomic) BOOL enableCache;
@property (copy, nonatomic) NSString *cacheKey;

- (void)viewFirstScreenDidLoad:(BOOL)a0;
- (void)didLoadPageModel:(id)a0;
- (void)initializeExtension;
- (void)setUpPOIClientCacheConfig;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
