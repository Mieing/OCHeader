@class TempoEngine, NSMutableSet, NSMutableDictionary;

@interface AWEDitoTempoExtension : AWEPOIBaseExtension

@property (retain, nonatomic) NSMutableSet *willDoCacheTags;
@property (weak, nonatomic) TempoEngine *tempoEngine;
@property (retain, nonatomic) NSMutableDictionary *preloadURLS;

- (id)preloadConfigs;
- (void)didLoadPageModel:(id)a0;
- (void)componentViewModelDidCreated:(id)a0;
- (void)initializeExtension;
- (void)setupTempoConfig;
- (double)fontScaleForTempo;
- (id)poiPreloadURLRuleWithBizCode:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
