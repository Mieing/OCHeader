@class NSObject;
@protocol AWEHomePagePerfMetricsMonitorProtocol;

@interface AWEHomepageChannelChangePerfMetricsMonitorPlugin : NSObject

@property (weak, nonatomic) NSObject<AWEHomePagePerfMetricsMonitorProtocol> *delegate;

- (void)p_beginMonitorTabBarVCLifeCycle;
- (void).cxx_destruct;
- (id)init;

@end
