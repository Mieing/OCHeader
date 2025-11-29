@class BDWebImageStartUpConfig, NSString, BDWebImageCloudControl;

@interface BDImageManagerConfig : NSObject

@property (class, readonly) BDImageManagerConfig *sharedInstance;

@property (copy, nonatomic) BDWebImageStartUpConfig *startUpConfig;
@property (retain, nonatomic) BDWebImageCloudControl *cloudControl;
@property (nonatomic) double currentFetchInterval;
@property (readonly, copy, nonatomic) NSString *remoteConfigDescription;

- (void)startUpWithConfig:(id)a0;
- (void)applyRemoteConfigIfAvailable;
- (void)startFetchRemoteConfig;
- (double)lastFetchTime;
- (double)validFetchInterval;
- (void)saveLastFetchTime:(double)a0;
- (void)applyTTNetConfig;
- (void)startTTNetService;
- (void).cxx_destruct;
- (id)init;

@end
