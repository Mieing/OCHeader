@class NSString, NSMutableArray;

@interface GameCenterLiteAppStoreMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL coolStartFinish;
@property (nonatomic) BOOL background;
@property (copy, nonatomic) id /* block */ delayReleaseBlock;
@property (retain, nonatomic) NSString *liteAppStoreAppId;
@property (retain, nonatomic) NSString *liteAppStorePkgId;
@property (nonatomic) BOOL disableStore;
@property (retain, nonatomic) NSMutableArray *cachedEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (BOOL)checkCreateStore;
- (void)releaseStore;
- (void)notifyGameEntryExpose:(id)a0;
- (void)notifyGameEntryClick:(id)a0;
- (void)notifyGameCenterExit:(id)a0;
- (void)publishGlobalEventToAll:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
