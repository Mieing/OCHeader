@class NSObject;
@protocol OS_nw_path_monitor, OS_nw_path, OS_dispatch_queue;

@interface AWEDYDownloadNetwork : NSObject {
    NSObject<OS_nw_path_monitor> *_monitor;
    NSObject<OS_nw_path> *_currentPath;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (BOOL)isWiFiConnected;
- (void)startMonitoring;
- (void).cxx_destruct;
- (id)init;
- (void)stopMonitoring;
- (void)dealloc;

@end
