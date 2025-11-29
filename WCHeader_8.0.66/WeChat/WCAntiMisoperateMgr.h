@class NSString;

@interface WCAntiMisoperateMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL isAntiMisoperating;
@property (nonatomic) unsigned long long enterTimestamp;
@property (nonatomic) BOOL isExptOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)addNotification;
- (void)onApplicationBecomeActive;
- (void)onApplicationWillResignActive;
- (void)onAntiMisoperateChangeToOpen:(BOOL)a0;
- (void)updateProximityMonitoringState;
- (BOOL)isInAntiMisoperationState;
- (void)onProximityStateChange:(id)a0;
- (void)exitAntiMisoperating;
- (void)enterAntiMisoperating;

@end
