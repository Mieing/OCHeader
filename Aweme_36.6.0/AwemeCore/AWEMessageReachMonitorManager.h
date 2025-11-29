@class NSMutableArray;

@interface AWEMessageReachMonitorManager : NSObject

@property (nonatomic) long long launchTimeStamp;
@property (nonatomic) long long topBarPluginDidLoadTimeStamp;
@property (nonatomic) long long tabbarPluginDidLoadTimeStamp;
@property (nonatomic) double realLaunchTimeStamp;
@property (retain, nonatomic) NSMutableArray *monitorChannelArray;

- (void)tabBarPluginDidLoad;
- (void)topBarPluginDidLoad;
- (BOOL)monitorWithTabID:(id)a0;
- (void)calculateLaunchTimeStamp;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
