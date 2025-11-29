@class NSString;

@interface MicroMessengerAppStateMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL bForegroundActive;
@property (nonatomic) long long lastResignActiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (BOOL)isForegroundActive;
- (void)onClickWindow;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillEnterForeground;

@end
