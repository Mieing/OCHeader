@class NSArray, NSDictionary, HMDApplicationSession, NSString, NSObject, HMDRecordStore;
@protocol OS_dispatch_queue;

@interface HMDSessionTracker : NSObject <HMDApplicationSessionUpdate> {
    double _startTimestamp;
}

@property (retain) HMDApplicationSession *currentSession;
@property (retain) NSDictionary *lastestSessionDicAtLastLaunch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outdateQueryQueue;
@property BOOL isRunning;
@property (retain, nonatomic) HMDRecordStore *store;
@property (nonatomic) double lastUpdateTime;
@property (retain, nonatomic) NSArray *cacheSessionsTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)latestSessionDicAtLastLaunch;
+ (id)latestSessionAtLastLaunch;
+ (double)currentAppStartTime;
+ (id)dumpCurrentSession;
+ (void)initialize;
+ (id)currentSession;
+ (id)sharedInstance;

- (id)eternalSessionID;
- (id)lastTimeEternalSessionID;
- (void)cleanupWithAndConditions:(id)a0;
- (void)outdateSessionTimestampWithMaxCount:(long long)a0 interval:(double)a1 complete:(id /* block */)a2;
- (void)didUpdateWithSessionDic:(id)a0;
- (void)didUpdateForProperties:(id)a0;
- (void)didUpdateForProperty:(id)a0;
- (void)updateLastTimeEternalSessionIDFile;
- (void)addObserverForInjectedInfo;
- (void)recordSession:(id)a0 sessionIDChanged:(BOOL)a1 isSetUp:(BOOL)a2;
- (void)recordSession:(id)a0 sessionIDChanged:(BOOL)a1;
- (id)getSessionsInAscendingOrder;
- (double)startTimetag;
- (void)cleanupWithAndConditons:(id)a0;
- (BOOL)needStartupImmediatelly;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)setup;
- (Class)storeClass;

@end
