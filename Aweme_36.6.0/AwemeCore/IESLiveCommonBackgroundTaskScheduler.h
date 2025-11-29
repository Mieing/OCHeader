@class NSMutableDictionary, IESLiveCommonTaskRecorder, NSMutableArray, NSLock;

@interface IESLiveCommonBackgroundTaskScheduler : NSObject

@property (weak, nonatomic) IESLiveCommonTaskRecorder *taskRecorder;
@property (retain, nonatomic) NSMutableArray *backgroundTaskPool;
@property (retain, nonatomic) NSMutableDictionary *taskIDMap;
@property (retain, nonatomic) NSMutableDictionary *groupIDMap;
@property (retain, nonatomic) NSLock *lock;

- (void)cancelAllTask;
- (id)dequeueAtGroupID:(id)a0;
- (BOOL)isExistWithGroupID:(id)a0;
- (id)dequeueAtTaskId:(id)a0;
- (id)dequeueAllTask;
- (BOOL)isExistWithTaskId:(id)a0;
- (void)_realRunTask:(id)a0;
- (BOOL)cancelTask:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (id)runTask:(id)a0;

@end
