@class NSString, NSMutableArray;
@protocol SonicFrameService;

@interface SonicCanvasService : NSObject <SonicCanvasService> {
    struct shared_ptr<sonic::graphics::Coordinator> { struct Coordinator *__ptr_; struct __shared_weak_count *__cntrl_; } coordinator_;
    NSMutableArray *views_;
    float pixel_ratio_;
    BOOL is_monitor_open_;
    id<SonicFrameService> frame_service_;
    BOOL enable_adaptive_fps_;
    BOOL enable_adaptive_fps_watch_touch_;
    int max_no_diff_frames_;
    int lowest_fps_;
    int highest_fps_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preload;

- (void)onPause;
- (void)onInitWithSonicApp:(id)a0;
- (void)onDestroy:(id)a0;
- (void)onFrame;
- (void)cancelListenOnViewTouch;
- (void)onTouch;
- (void)slowDownFps;
- (void)recoverFps;
- (void)listenOnViewTouch;
- (void)openMonitor;
- (void)closeMonitor;
- (id)getMonitorData;
- (BOOL)screenshot:(id)a0 dstWidth:(int)a1 dstHeight:(int)a2 dstBuffer:(void *)a3;
- (void)pausePresentCanvas;
- (void)resumePresentCanvas;
- (void)disableAdaptiveFpsMode:(int)a0;
- (void)enableAdaptiveFpsMode:(int)a0 lowestFps:(int)a1 highestFps:(int)a2 watchTouch:(BOOL)a3;
- (void)hintAdaptiveFpsMode;
- (id)initWithPixelRatio:(float)a0;
- (void)onContentDrawing:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)removeView:(id)a0;
- (void)addView:(id)a0;

@end
