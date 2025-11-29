@class CADisplayLink;

@interface VSyncClient : NSObject {
    struct function<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> { struct __value_func<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _callback;
    CADisplayLink *_displayLink;
    double current_refresh_rate_;
    BOOL can_pause_;
    BOOL enable_parallel_pipeline_;
}

@property (readonly, nonatomic) double refreshRate;
@property (nonatomic) BOOL allowPauseAfterVsync;

- (id)initWithTaskRunner:(struct RefPtr<fml::TaskRunner> { struct TaskRunner *x0; })a0 callback:(struct function<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> { struct __value_func<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a1;
- (void)setMaxRefreshRate:(double)a0;
- (void)setEnableParallelPipeline:(BOOL)a0;
- (void)preventPausing;
- (void)resumePausing;
- (void)await;
- (void)pause;
- (void)onDisplayLink:(id)a0;
- (void)invalidate;
- (id)getDisplayLink;
- (void)didChangedQosLevel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
