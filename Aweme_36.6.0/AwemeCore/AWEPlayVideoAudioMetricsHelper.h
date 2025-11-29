@interface AWEPlayVideoAudioMetricsHelper : NSObject

+ (id)effectModelPathWithModelNames:(id)a0 requirements:(id)a1;
+ (void)loadEffectModelWithModelNames:(id)a0 requirements:(id)a1 completion:(id /* block */)a2;
+ (id)audioMetricsConfig;
+ (BOOL)enableAudioMetrics;
+ (long long)audioMetricsDetectSamplingRate;
+ (long long)audioMetricsDetectMinDuration;
+ (id)audioMetricsDetectThresholdParams;
+ (id)audioMetricsAlgorithmConfig;
+ (id)audioMetricsBitMask;

@end
