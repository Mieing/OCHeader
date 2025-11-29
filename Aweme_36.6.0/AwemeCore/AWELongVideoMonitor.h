@class NSString;

@interface AWELongVideoMonitor : NSObject <AWELongVideoMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)longVideoPageMonitorWithScene:(id)a0 totalCost:(double)a1 uiDuration:(double)a2 extParams:(id)a3;
+ (void)longVideoTrackerMonitorWithParamName:(id)a0 extParams:(id)a1;
+ (void)longVideoPlayerStallMonitorWithScene:(id)a0 duration:(double)a1 extParams:(id)a2;
+ (void)longVideoPlayerFailMonitorWithScene:(id)a0 type:(id)a1 model:(id)a2;


@end
