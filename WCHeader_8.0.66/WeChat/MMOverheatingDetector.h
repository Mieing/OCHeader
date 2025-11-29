@class NSString, MMOverheatingCharacteristics;

@interface MMOverheatingDetector : MMRootService <INetworkStatusMgrExt, MMServiceProtocol>

@property (retain, nonatomic) MMOverheatingCharacteristics *currentCharacteristics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initDetector;
- (void)notifyThatDeviceMayBecomeOverheating:(id)a0;
- (void)notifyThatDeviceMayResignOverheating:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)handleNetworkChangeToUnreachable;
- (void).cxx_destruct;

@end
