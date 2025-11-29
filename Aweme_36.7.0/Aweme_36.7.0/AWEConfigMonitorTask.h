@class NSString;

@interface AWEConfigMonitorTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configWebViewMonitors;
+ (void)execute;


@end
