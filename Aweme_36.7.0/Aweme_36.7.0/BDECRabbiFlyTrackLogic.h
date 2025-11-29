@class NSMutableDictionary, NSMutableSet, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyTrackLogic : NSObject

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) NSMutableSet *didTrackLoadTokenSet;
@property (retain, nonatomic) NSMutableSet *didTrackPerformanceTokenSet;
@property (retain, nonatomic) NSMutableDictionary *seqNoModelPerfMetricMap;
@property (retain, nonatomic) NSMutableDictionary *tokenModelPerfMetricMap;

- (id)initWithSupervisor:(id)a0;
- (id)modelPerfMetricWithSeqNo:(id)a0;
- (id)modelPerfMetricWithToken:(id)a0;
- (void)removeModelPerfMetricWithSeqNo:(id)a0;
- (void)trackErrorWithCategory:(id)a0 errorMessage:(id)a1 extra:(id)a2;
- (void)trackDynamicView:(id)a0 state:(unsigned long long)a1;
- (void)removeModelPerfMetricWithToken:(id)a0;
- (void)trackPerformanceWithDynamicModel:(id)a0 perfMetric:(id)a1 modelPerfMetric:(id)a2;
- (void)trackLoadWithDynamicModel:(id)a0 loadMetric:(id)a1;
- (void).cxx_destruct;

@end
