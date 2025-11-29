@interface SAMICore_AudioMetricsLite : NSObject {
    struct shared_ptr<SAMI::AudioMetricsLite::AudioMetricsLite> { struct AudioMetricsLite *__ptr_; struct __shared_weak_count *__cntrl_; } audioMetricsLite_;
}

- (int)initGlobal;
- (int)prepareWithData:(id)a0;
- (int)processWithInterleaveBuffer:(float *)a0 sampleNumPreCh:(int)a1 channelNum:(int)a2;
- (int)processWithPlannerBuffer:(float **)a0 sampleNumPreCh:(int)a1 channelNum:(int)a2;
- (int)processTail;
- (id)getResultWithType:(int)a0;
- (void)releaseGlobal;
- (void).cxx_destruct;
- (id)version;
- (id)init;
- (id).cxx_construct;
- (int)reset;
- (void)dealloc;

@end
