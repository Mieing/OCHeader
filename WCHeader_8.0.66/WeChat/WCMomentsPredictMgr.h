@class NSString, OrderedDictionary, NSMutableDictionary;

@interface WCMomentsPredictMgr : MMUserService <MMServiceProtocol> {
    OrderedDictionary *_pendingTasks;
    OrderedDictionary *_runningTasks;
    NSMutableDictionary *_cachedPredictedResults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initPredictor;
- (void)addTask:(id)a0;
- (void)taskDidComplete:(id)a0;
- (void)checkTasks;
- (BOOL)_checkNextTask;
- (void)applicationWillEnterForeground:(id)a0;
- (id)getCachedPredictedResultWithTid:(id)a0 mid:(id)a1;
- (id)getCachedOrCreatePredictedResultWithTid:(id)a0 mid:(id)a1;
- (BOOL)predictVideoSourceWithDataItem:(id)a0 mediaItem:(id)a1;
- (BOOL)predictVideoSourceWithDataItem:(id)a0;
- (id)predictVideoSourceWithDataItems:(id)a0;
- (void)handleVideoSourcePredictTaskDidComplete:(id)a0;
- (void).cxx_destruct;

@end
