@class NSString, NSMutableDictionary;

@interface WCFinderSecurityMonitor : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *screenShotBlockDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setReceiveScreenShootBlock:(id /* block */)a0 forObject:(id)a1;
- (void)cleanBlockForObject:(id)a0;
- (void)onReceivewTakeScreenShotNotification:(id)a0;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
