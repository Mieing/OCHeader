@class NSDictionary, TencentLBSReachability, NSOperationQueue;

@interface TencentLBSWifiManager : NSObject

@property (retain, nonatomic) TencentLBSReachability *internetReachability;
@property (retain) NSDictionary *wifiInfo;
@property (retain, nonatomic) NSOperationQueue *queue;

+ (id)sharedInstance;
+ (id)captiveWifiInfo;

- (id)init;
- (void)dealloc;
- (void)reachabilityChanged:(id)a0;
- (void).cxx_destruct;

@end
