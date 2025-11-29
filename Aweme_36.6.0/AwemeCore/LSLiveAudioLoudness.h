@interface LSLiveAudioLoudness : NSObject {
    struct LiveCoreAudioLoudness { struct AudioCacheBuffer *x0; void *x1; struct extractorCreateParameter { unsigned int x0; unsigned int x1; } x2; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x3; int x4; int x5; void /* function */ *x6; void *x7; BOOL x8; void /* function */ *x9; void *x10; } *_audioLoudnessInstance;
}

@property (copy, nonatomic) id /* block */ audioLoudnessCallback;
@property (copy, nonatomic) id /* block */ audioLoudnessInfoCallback;

- (void)calculateLoudnessAndPeak:(int)a0;
- (id)initWithAudioConfig:(int)a0 channels:(int)a1 cacheMaxSize:(int)a2;
- (id)initWithAudioConfig:(int)a0 channels:(int)a1 cacheMaxSize:(int)a2 enableSamiMemLeakFix:(BOOL)a3;
- (void)cacheAudioData:(short *)a0 nbSamples:(int)a1 channel:(int)a2;
- (void)initLSLiveLoudnessCallback:(id /* block */)a0;
- (void)initLSLiveLoudnessInfoCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
