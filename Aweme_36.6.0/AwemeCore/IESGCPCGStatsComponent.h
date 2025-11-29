@class NSOperationQueue, NSMutableDictionary, NSString;

@interface IESGCPCGStatsComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGStatsRouter, IESGCPCGContainerActions>

@property (retain, nonatomic) NSMutableDictionary *durationMaps;
@property (retain, nonatomic) NSMutableDictionary *timestamps;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (long long)totalLaunchCount;
- (long long)totalSideBarLaunchCount;
- (long long)currentGameIdLaunchCount;
- (BOOL)isNewUserInLocal;
- (long long)durationFromFirstFrameToNow;
- (long long)durationFromStartPlayToFirstFrame;
- (long long)durationFromLaunchToFirstFrame;
- (void)startRecordDurationWithKey:(id)a0;
- (long long)endRecordDurationWithKey:(id)a0;
- (long long)getDurationWithKey:(id)a0;
- (void)markTimestampWithKey:(id)a0;
- (unsigned long long)timestampWithKey:(id)a0;
- (long long)calculateIntervalFromKey:(id)a0 toKey:(id)a1;
- (long long)calculateIntervalUntilNowWithKey:(id)a0;
- (void)addTimestampMarking:(id)a0;
- (void)componentDidAttached;
- (void)containerDidBindInstance:(id)a0;
- (void)_recordLaunchCount;
- (id)_timestampsWithKey:(id)a0;
- (void)_doInMain:(id /* block */)a0;
- (id)_doInMainWithResult:(id /* block */)a0;
- (BOOL)_isMainQueue;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
