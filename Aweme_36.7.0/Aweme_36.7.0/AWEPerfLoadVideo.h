@class NSString, UIViewController, AWEPerfLoadViewInfo;

@interface AWEPerfLoadVideo : AWEPerfLoadObject <AWEPerfLoadViewInfoObserver> {
    UIViewController *containerVC;
    AWEPerfLoadViewInfo *viewInfo;
    struct atomic_flag { _Atomic BOOL _Value; } finishOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)notifyFirstFrameWithStatus:(unsigned long long)a0;
+ (BOOL)isRunning;
+ (void)initialize;

- (void)viewInfoDidUpdate:(id)a0;
- (void)finishRunning;
- (void)perf_isa_videoEngineReadyToPlay:(id)a0;
- (void)perf_isa_videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)perf_isa_videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)perf_isa_videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)perf_isa_readyForDisplayForURL:(id)a0 metaFormat:(id)a1;
- (void)perf_isa_playbackDidFailForURL:(id)a0 error:(id)a1;
- (void)perf_isa_playbackDidFailWithErrorDict:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
