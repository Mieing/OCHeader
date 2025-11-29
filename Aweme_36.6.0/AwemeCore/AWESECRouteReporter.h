@class NSString;

@interface AWESECRouteReporter : NSObject <SECRouteEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleRouteEvent:(id)a0;
- (void)_reportPerformanceIfNeeded:(id)a0;
- (void)_reportFeaturedTracesIfNeeded:(id)a0;
- (void)_reportPerformance:(id)a0;
- (id)hybridTracesFromNative:(id)a0;
- (id)buildHybridTracesReport:(id)a0;
- (id)_convertIntoUniTraceItem:(id)a0;
- (id)buildSingleHybridTraceReport:(id)a0;
- (id)_executeExprWithOverviewFeature:(id)a0 withEvents:(id)a1;
- (id)_executeExprWithFeatures:(id)a0 withTrace:(id)a1;
- (id)featureNames:(id)a0;
- (void)_reportFeaturedTrace:(id)a0 withFeatureNames:(id)a1 sampleRate:(unsigned long long)a2;
- (id)_buildOverviewParams:(id)a0;
- (id)_executeExprWithFeature:(id)a0 withParams:(id)a1;
- (id)_executeExprWithFeatuers:(id)a0 withHybridTrace:(id)a1;
- (void)handleEvent:(id)a0;
- (id)subscriberId;

@end
