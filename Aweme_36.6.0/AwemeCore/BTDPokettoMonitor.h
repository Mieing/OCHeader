@class NSString;
@protocol BTDPokettoMonitor;

@interface BTDPokettoMonitor : NSObject

@property (retain, nonatomic) id<BTDPokettoMonitor> monitor;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *sdkAppId;

+ (id)shareInstance;
+ (id)appid;

- (BOOL)hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)monitorWithSdkVersion:(id)a0 sdkAppId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
