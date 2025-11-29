@class AWEStorageServiceMonitor, NSString;

@interface AWEStorageServiceMonitorManager : NSObject

@property (retain, nonatomic) AWEStorageServiceMonitor *monitor;
@property (copy, nonatomic) NSString *sessionID;

+ (id)sharedInstance;

- (void)setDelegateForAWEStorage;
- (void)startMonitorIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)startMonitor;
- (void)stopMonitor;

@end
