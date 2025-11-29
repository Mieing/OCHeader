@class IESLiveStreamPlayerLayoutMonitorItem, NSMutableArray;

@interface IESLiveStreamPlayerLayoutMonitor : NSObject

@property (nonatomic) BOOL isStart;
@property (retain, nonatomic) IESLiveStreamPlayerLayoutMonitorItem *previewStreamPlayerLayoutItem;
@property (retain, nonatomic) NSMutableArray *innerStreamPlayerLayoutItems;
@property (nonatomic) BOOL layoutChanged;

+ (BOOL)enableMonitor;
+ (id)p_config;
+ (double)timeIntervalForMonitor;
+ (id)ignoreLayouts;
+ (double)distanceMarkedAsLayoutChanged;
+ (id)monitor;

- (void)onEnterInnerFeed:(id)a0;
- (void)onInnerLayoutUpdate:(id)a0;
- (void)p_reportIfNeed;
- (void)p_analyse;
- (BOOL)p_isLayoutsDifferentBetweenPreviewLayout:(id)a0 andInnerLayout:(id)a1;
- (void)p_reportLayoutChangedWithLayout:(id)a0 item2:(id)a1;
- (id)p_getDiffForRect1:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rect2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_triggerALogReportIfNeed:(id)a0;
- (void)p_doTriggerALogReport;
- (void).cxx_destruct;
- (void)startMonitor;
- (void)stopMonitor;

@end
