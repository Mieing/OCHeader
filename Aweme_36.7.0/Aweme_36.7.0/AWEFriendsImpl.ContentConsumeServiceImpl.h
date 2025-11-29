@interface AWEFriendsImpl.ContentConsumeServiceImpl : HTSService <AFDContentConsumeSwiftService>

- (void)requestMateRateReportWithScene:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldAggregateModel:(id)a0 referString:(id)a1;
- (BOOL)shouldAggregateModel:(id)a0 referString:(id)a1 willShow:(BOOL)a2;
- (void)loadAggregationListIfNeededWithModel:(id)a0 referString:(id)a1;
- (void)loadAggregationListIfNeededWithAwemeList:(id)a0;
- (BOOL)isMusicCardContentWithModel:(id)a0;
- (id)generateAudioWaveArrayFromString:(id)a0 duration:(double)a1 maxHeight:(double)a2 minHeight:(double)a3;
- (void)getBackgroundColorWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)reportMomentMigrationWithCompletion:(id /* block */)a0;
- (BOOL)saveAsPolaroidWithImage:(id)a0 awemeModel:(id)a1;
- (id)renderMomentBlurImageWithSourceImage:(id)a0 cacheKey:(id)a1;
- (void)dispatchScrollEventWithScene:(id)a0 from:(long long)a1 to:(long long)a2;
- (Class)momentOnboardingOptimizeManagerClass;
- (id)init;

@end
