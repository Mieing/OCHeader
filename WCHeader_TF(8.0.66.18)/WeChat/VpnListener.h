@class NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface VpnListener : NSObject {
    BOOL _is_vpn_used;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void)UpdateVpnStatus;
- (BOOL)GetVpnStatus;
- (BOOL)IsVpnConnected;
- (void)dealloc;

@end
