@class NSString;

@interface ServiceWorkerManager : MMUserService <IWSSearchUtilExtension, MMServiceProtocol>

@property (retain, nonatomic) NSString *currLiteAppId;
@property (nonatomic) BOOL shouldCancelTask;
@property (nonatomic) BOOL shouldPendingCoolStartCreateStoreEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)checkshouldPendingCoolStartCreateStoreEvent;
- (void)onServiceTerminate;
- (BOOL)enableServiceWorker;
- (void)checkCreateStore;
- (void)releaseStore;
- (void)notifyLifecycleStateChange:(BOOL)a0;
- (void)notifyBottomTabSwitch:(id)a0;
- (void)notifySearchEntryExpose:(id)a0;
- (void)notifySearchEntryClick:(id)a0;
- (void)notifySearchQuit:(id)a0;
- (void)publishGlobalEventToAll:(id)a0 params:(id)a1;
- (void)onTemplateApplyed:(unsigned long long)a0;
- (void).cxx_destruct;

@end
