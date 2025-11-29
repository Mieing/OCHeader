@class MMScrollMetricsData, NSString, CADisplayLink;
@protocol MMScrollMetricsDelegate;

@interface MMScrollViewMetrics : NSObject <MMFPSMonitorMonitorExt> {
    struct FrameMetrics { struct BufferArray<3UL> { struct array<float, 3UL> { float __elems_[3]; } array_; unsigned int index_; } frames_; int frame_counter_; struct scroll_metrics_t { float fps; float duration; float stutter; int smallJank; int bigJank; int jank; float scrollScore; float hitchRate; } metrics_; double last_time_; double start_time_; double scroll_start_time_; double scroll_end_time_; double jank_frame_time_total_; double frame_time_total_; } _metrics;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) long long state;
@property (retain, nonatomic) MMScrollMetricsData *data;
@property (nonatomic) double ts;
@property (nonatomic) unsigned int prescrollDuration;
@property (nonatomic) unsigned int flag;
@property (nonatomic) BOOL scrolled;
@property (nonatomic) BOOL scrolling;
@property (weak, nonatomic) id<MMScrollMetricsDelegate> delegate;
@property (nonatomic) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onWillResignActive:(id)a0;
- (void)stopDisplayLink;
- (void)mmFPSMonitorOnUITrackingBegin;
- (void)mmFPSMonitorOnUITrackingEnd:(double)a0 scrollScore:(double)a1;
- (void)onFrameCallback:(id)a0;
- (void)scrollWillBegin;
- (void)scrollDidEnd;
- (void)prescrollBegin;
- (void)prescrollEnd;
- (void)report:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
