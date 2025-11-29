@class BDPWebViewPage, BDPPagePerformanceMonitorEvent;

@interface BDPWebViewPagePerformanceMonitor : NSObject

@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *create;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *loadPageFrameHTML;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *readPageFrameJS;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *evalPageFrameJS;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *readPathFrameJS;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *evalPathFrameJS;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *pluginPageFrame;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *extraPageFrame;
@property (nonatomic) BOOL htmlLoadedWhileUsing;
@property (weak, nonatomic) BDPWebViewPage *page;
@property (readonly, nonatomic) BDPPagePerformanceMonitorEvent *loadIndustrySDK;

- (void)reportLongTaskWithLongTimes:(id)a0 totalTime:(id)a1;
- (void)monitorWebviewTimelineEvent;
- (void)reportLoadTimePageFrameWithLocalPkg:(int)a0;
- (void)reportLoadTimePathFrameWithLocalPkg:(int)a0;
- (void)monitorPageLoadDetailTimeLineData;
- (void)reportPagePreloadUsageWithIsStartPage:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPage:(id)a0;

@end
