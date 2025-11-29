@class NSString, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface TTNetworkMonitor : NSObject {
    struct scoped_refptr<base::ObserverListThreadSafe<net::TTNetworkMonitorObserver>> { void *ptr_; } observers_;
    NSObject<OS_nw_path_monitor> *path_monitor_;
    NSObject<OS_dispatch_queue> *monitor_queue_;
}

@property unsigned int latestWifiIfIndex;
@property unsigned int latestCellIfIndex;
@property int latestIsWiFiDefaultNetwork;
@property (copy) NSString *latestGatewayAddress;
@property BOOL monitorStarted;

+ (id)shareInstance;

- (void)UpdateGatewayAddress:(id)a0;
- (void)UpdateNetworkIfIndexForWiFi:(unsigned int)a0 Cell:(unsigned int)a1 IsWiFiDefaultNetwork:(int)a2;
- (void).cxx_destruct;
- (void)addObserver:(struct TTNetworkMonitorObserver { void /* function */ **x0; } *)a0;
- (id)init;
- (id).cxx_construct;
- (void)removeObserver:(struct TTNetworkMonitorObserver { void /* function */ **x0; } *)a0;
- (void)dealloc;
- (void)startMonitor;

@end
