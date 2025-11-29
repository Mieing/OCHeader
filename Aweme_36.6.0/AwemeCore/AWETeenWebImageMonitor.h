@class NSObject;
@protocol OS_dispatch_queue;

@interface AWETeenWebImageMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *teenWebImageMonitorQueue;

+ (id)settingsConfig;
+ (id)sharedInstance;

- (void)trackTeenWebImageLoadWithImage:(id)a0 imageRequest:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;

@end
