@protocol AWEOFGMonitorDelegate;

@interface AWEOFGMonitor : NSObject

@property (class, weak, nonatomic) id<AWEOFGMonitorDelegate> delegate;

+ (void)showToast:(id)a0;

@end
