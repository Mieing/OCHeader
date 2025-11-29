@interface OMJVideoAnalyzer : NSObject {
    struct shared_ptr<XMJVideoAnalyzer> { struct XMJVideoAnalyzer *__ptr_; struct __shared_weak_count *__cntrl_; } _backingAnalyzer;
}

@property (readonly, nonatomic) BOOL isInitialized;

- (void)dealloc;
- (id)init;
- (BOOL)initResourcesWithModelInfos:(id)a0 error:(id *)a1;
- (void)releaseResources;
- (BOOL)feedVideoFrameWithData:(id)a0 width:(long long)a1 height:(long long)a2 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 error:(id *)a4;
- (BOOL)feedVideoFrameWithImage:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (BOOL)feedAudioData:(id)a0 error:(id *)a1;
- (id)calculateClassifyResult:(id *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
