@class NSString, AWETeenQualityScene, NSObject;
@protocol OS_dispatch_queue;

@interface AWETeenQualityService : NSObject <AWEDigitalWellbeingMessage>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) AWETeenQualityScene *activeScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanced;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)p_setupNotification;
- (void)onSceneStart:(id)a0 subSceneName:(id)a1;
- (void)reportCustomMonitor:(id)a0 params:(id)a1;
- (void)onSectionStart:(id)a0 subSceneName:(id)a1 identifier:(id)a2 sectionName:(id)a3;
- (void)onSectionFinish:(id)a0 subSceneName:(id)a1 identifier:(id)a2 sectionName:(id)a3;
- (void)onSceneStart:(id)a0 subSceneName:(id)a1 identifier:(id)a2 description:(id)a3;
- (void)onSceneFinishBySuccess:(id)a0 identifier:(id)a1 subSceneName:(id)a2 description:(id)a3;
- (void)onSceneFinishByCancel:(id)a0 identifier:(id)a1 subSceneName:(id)a2 isNetworkError:(BOOL)a3 description:(id)a4;
- (void)onSceneFinishByFail:(id)a0 identifier:(id)a1 subSceneName:(id)a2 isNetworkError:(BOOL)a3 description:(id)a4;
- (void)removeSceneWithKey:(id)a0;
- (void)applicationEnterBackgroundNotification;
- (void)applicationEnterForegroundNotification;
- (void)applicationTerminateNotification;
- (void)onSceneStart:(id)a0 subSceneName:(id)a1 identifier:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
