@class NSMutableDictionary, BDUGLuckyCountDownCache, NSString, NSMutableArray;
@protocol BDUGLuckyTimerInternalProtocol;

@interface BDUGLuckyCountDownManager : NSObject <BDUGLuckyCountDownManagerInternalProtocol, BDUGLuckyTimerTaskExecuteDelegate, BDUGLuckyCountDownTaskDelegateProtocol, BDUGLuckyCleanCacheDelegateProtocol>

@property (retain, nonatomic) BDUGLuckyCountDownCache *cache;
@property (retain, nonatomic) id<BDUGLuckyTimerInternalProtocol> taskTimer;
@property (retain, nonatomic) NSMutableArray *taskIds;
@property (retain, nonatomic) NSMutableArray *pendantReadyTaskIds;
@property (retain, nonatomic) NSMutableDictionary *delegateScenes;
@property (retain, nonatomic) NSMutableDictionary *showingTaskForScene;
@property (nonatomic) double lastPersistTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraServiceProtocols;
+ (void)onCleanCache;
+ (void)initializeActivityTaskManager;
+ (void)preStartupCountdownTaskModule;
+ (id)sharedInstance;
+ (id)moduleName;
+ (id)serviceProtocol;

- (void)__persistTaskProgress;
- (id)__needNoticeToRemoveDelegates:(id)a0;
- (id)__getScenesForDelegate:(id)a0;
- (id)__needNoticeToShowDelegates:(id)a0;
- (id)__getShowingTaskForScene:(id)a0;
- (void)excecuteTasksWithScenes:(id)a0 timeInterval:(double)a1;
- (void)startLuckyCountDownTimerWithScene:(id)a0;
- (void)stopLuckyCountDownTimerWithScene:(id)a0;
- (void)unregisterCountDownTask2:(id)a0;
- (void)registerPendantDelegate:(id)a0 scene:(id)a1;
- (void)unregisterPendantDelegate:(id)a0;
- (id)pendantWithScene:(id)a0;
- (id)pendantPositionWithScene:(id)a0;
- (void)registerCountDownTask:(id)a0;
- (void)unregisterCountDownTask:(id)a0;
- (long long)getSavedProgressForTask:(id)a0;
- (id)getSavedUploadTokenForTask:(id)a0;
- (void)clearSavedProgressForTask:(id)a0;
- (void)requestPendantInfo:(id)a0 pendantIdentifier:(id)a1 token:(id)a2 reportInterval:(long long)a3 pendantType:(id)a4 completion:(id /* block */)a5;
- (void)requestTaskCenterAckTime:(id)a0 withToken:(id)a1 uniqueId:(long long)a2 currentTimes:(long long)a3 retryTimes:(long long)a4 serverExtra:(id)a5 extra:(id)a6 completion:(id /* block */)a7;
- (void)requestTaskCenterAckTimeWithToken:(id)a0 taskTokenType:(long long)a1 actNamespace:(id)a2 uniqueId:(long long)a3 currentTimes:(long long)a4 retryTimes:(long long)a5 serverExtra:(id)a6 extra:(id)a7 completion:(id /* block */)a8;
- (void)taskPendantDidReady:(id)a0;
- (void)taskPendantDidDestroyed:(id)a0;
- (id)timer;
- (void).cxx_destruct;
- (id)init;
- (void)appWillResignActive;

@end
