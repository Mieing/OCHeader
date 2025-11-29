@class NSMutableDictionary, AWEActivityCountdownTaskModel, NSString, AWEAwemeModel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEWatchVideoTask : NSObject <AWEUserMessage, AWEWatchVideoTaskProtocol>

@property (retain, nonatomic) NSMutableDictionary *consumeAwemeIDs;
@property (retain, nonatomic) AWEActivityCountdownTaskModel *curActivity;
@property (retain, nonatomic) NSMutableDictionary *curActCountdowns;
@property (retain, nonatomic) NSMutableArray *allTasks;
@property (copy, nonatomic) NSString *timerIdenterfier;
@property (nonatomic) long long curTaskCountdown;
@property (nonatomic) unsigned long long curPlayStatus;
@property (copy, nonatomic) NSString *curScene;
@property (retain, nonatomic) AWEAwemeModel *curPlayAweme;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)addTaskObserver:(id)a0 forTask:(id)a1;
- (void)removeTaskObserver:(id)a0;
- (void)clearInvalidTasks;
- (void)addSingleTask:(id)a0;
- (void)removeSingleTask:(id)a0;
- (void)pauseTaskTimerWithAweme:(id)a0 playStatus:(unsigned long long)a1 scene:(id)a2;
- (id)nextValidTask;
- (void)startTaskTimerWithAweme:(id)a0 playStatus:(unsigned long long)a1 scene:(id)a2;
- (void)saveCurrentCountdownProgress;
- (void)timeFired;
- (id)allTaskIds;
- (id)currentPlayAwemeModel;
- (long long)currentCountdownForTask:(id)a0;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startTask:(id)a0;
- (double)currentTimeInterval;
- (void)stopTask;

@end
