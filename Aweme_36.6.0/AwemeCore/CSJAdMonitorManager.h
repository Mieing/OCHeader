@class CSJExpressAdMonitor, CSJSDKMonitor, CSJUserMonitor;

@interface CSJAdMonitorManager : NSObject

@property (retain, nonatomic) CSJExpressAdMonitor *expressAdMonitor;
@property (retain, nonatomic) CSJUserMonitor *userMonitor;
@property (retain, nonatomic) CSJSDKMonitor *sdkMonitor;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
