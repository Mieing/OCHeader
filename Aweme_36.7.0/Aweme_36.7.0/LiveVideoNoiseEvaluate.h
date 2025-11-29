@class NSLock, LiveVideoBmfModsDownloader;

@interface LiveVideoNoiseEvaluate : NSObject {
    int _threadNum;
    int _byteNNForwardType;
    int _triggerInterval;
    int _frameNum;
    int _frameInterval;
    long long _lastTriggerTime;
    int _frameCountInTrigger;
    int _costMsAccum;
    int _costMsCount;
    float _noiseValueAccum;
    float _noiseValueAvg;
    struct shared_ptr<BMFNoiseLive> { struct BMFNoiseLive *__ptr_; struct __shared_weak_count *__cntrl_; } _noiseLive;
    LiveVideoBmfModsDownloader *_modelDownloader;
    int _lastCode;
    NSLock *_lock;
}

@property (nonatomic) int videoNoiseEvaluateMask;

- (id)getReport;
- (int)process:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (BOOL)setup:(id)a0;

@end
