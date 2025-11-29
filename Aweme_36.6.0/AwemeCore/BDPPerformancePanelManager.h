@class BDPTimingEvent, BDPUniqueID, BDPPerformancePanelView;

@interface BDPPerformancePanelManager : NSObject {
    BDPPerformancePanelView *_panelView;
    BDPTimingEvent *_launchEvent;
    BDPTimingEvent *_pageRenderEvent;
    BDPTimingEvent *_pageSwitchEvent;
}

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) BDPUniqueID *observerUniqueID;

+ (void)closePanel;
+ (id)performancePanelManager;
+ (id)sharedManager;

- (void)showPanel;
- (void)setDownloadTime:(double)a0;
- (void)setFirstRenderTime:(double)a0;
- (void)startEventWithType:(long long)a0;
- (void)stopEventWithType:(long long)a0;
- (void)requestPerformanceInfo;
- (void)setCPUUsage:(double)a0 MemoryUsage:(double)a1 FPS:(double)a2;
- (void)setReRenderTime:(double)a0;
- (void)setXplayData:(id)a0;
- (void).cxx_destruct;
- (id)_init;

@end
