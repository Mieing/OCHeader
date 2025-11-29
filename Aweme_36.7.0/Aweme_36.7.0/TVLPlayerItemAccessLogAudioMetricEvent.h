@class NSDictionary, NSLock;

@interface TVLPlayerItemAccessLogAudioMetricEvent : TVLPlayerItemLogEvent {
    NSDictionary *_currentMetricOriginalInfo;
    NSLock *_lock;
    BOOL _isDetectAfterAE;
}

@property (readonly, nonatomic) NSDictionary *metricLogInfo;

- (float)getFloatValue:(id)a0 tag1:(id)a1 tag2:(id)a2;
- (id)metricLogInfoScore:(id)a0;
- (id)metricLogInfoLoudness:(id)a0;
- (id)metricLogInfoClipping:(id)a0;
- (id)metricLogInfoDynamicrange:(id)a0;
- (id)metricLogInfoSnr:(id)a0;
- (id)metricLogInfobackgroundNoise:(id)a0;
- (id)metricLogInfoCutoffFrequency:(id)a0;
- (id)metricLogInfoPhaseCheck:(id)a0;
- (long long)getInt64Value:(id)a0 tag:(id)a1;
- (id)initWithDetectType:(BOOL)a0;
- (float)getFloatValue:(id)a0 tag:(id)a1;
- (void)updateAudioMetricDetectResult:(id)a0;
- (void).cxx_destruct;

@end
