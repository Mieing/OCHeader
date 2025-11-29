@class NSString;

@interface AWERelatedRecommendPreloadSmartService : AWEBaseSmartServiceImpl <AWERelatedRecommendPreloadSmartService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onRunConfigBuilder:(id)a0;
- (void)onWillRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (BOOL)injectTruthForData:(id)a0 withInput:(id)a1 ext:(id)a2;

@end
