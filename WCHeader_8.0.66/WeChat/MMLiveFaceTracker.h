@class MMLiveFaceTrackTask, CIContext, NSDictionary, MMLiveTaskId, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MMLiveFaceTracker : NSObject {
    struct TrackerManager { int mWidth; int mHeight; long long mTrackerConfig; struct unique_ptr<WeEffect::TrackerManager::TrackerManagerImpl, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> { struct __compressed_pair<WeEffect::TrackerManager::TrackerManagerImpl *, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> { struct TrackerManagerImpl *__value_; } __ptr_; } mImpl; } faceTracker;
    struct XFaceCluster { struct unique_ptr<wevision::XFaceCluster::Impl, std::default_delete<wevision::XFaceCluster::Impl>> { struct __compressed_pair<wevision::XFaceCluster::Impl *, std::default_delete<wevision::XFaceCluster::Impl>> { struct Impl *__value_; } __ptr_; } mspImpl; } faceCluster;
}

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *faceTrackQueue;
@property (nonatomic) BOOL faceTrackModelInitSucc;
@property (retain, nonatomic) NSDictionary *faceTrackRulesDict;
@property (nonatomic) double lastProcessTime;
@property (retain, nonatomic) NSMutableArray *pendingTaskList;
@property (retain, nonatomic) MMLiveFaceTrackTask *currRunningTask;
@property (retain, nonatomic) NSMutableArray *faceTrackResultRecordList;
@property (nonatomic) BOOL isTrackBegin;
@property (nonatomic) BOOL isTrackFinished;
@property (nonatomic) double trackBeginTime;
@property (retain, nonatomic) CIContext *context;
@property (readonly, nonatomic) BOOL supportTrackFaceFeature;
@property (readonly, nonatomic) BOOL supportTrackLandmarks2D;
@property (readonly, nonatomic) BOOL supportPoliticalLeaderSearch;
@property (readonly, nonatomic) double faceTrackProcessInterval;
@property (readonly, nonatomic) double minTrackPersistTime;
@property (readonly, nonatomic) double maxTrackPersistTime;
@property (readonly, nonatomic) unsigned long long limitLeadCount;
@property (copy, nonatomic) id /* block */ faceTrackCompletion;

+ (BOOL)enableFaceTrack;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (BOOL)checkModelFilesExist;
- (void)initResources;
- (void)initRules;
- (void)initFaceTrackModel;
- (BOOL)checkFaceTrackProcessFrequently;
- (void)processFaceTrack:(id /* block */)a0;
- (void)runFaceTrack:(id)a0;
- (id)tryGetMostFitRecordIfCheckFaceTrackFinished:(BOOL *)a0;
- (void)finishFaceTrack;
- (id)tryGetMostFitResultRecord;
- (void)tagTrackBeginTimeIfNeed;
- (double)getCurrTrackPersistTime;
- (void)notifyMostFitFaceTrackResult:(id)a0;
- (BOOL)checkIsCurrCanRunning;
- (void)addFaceTrackTask:(id)a0;
- (void)removeFirstTrackTask;
- (void)clearPendingTasks;
- (void)startFaceTrackRunningIfNeed;
- (void)addFaceTrackResult:(id)a0;
- (id)_getRootRecordWhereFaceTrackResultBelong:(id)a0;
- (void)_sortFaceTrackRecordList;
- (void)clearFaceTrackRecords;
- (void)startSurviveCountDown;
- (void)cancelSurviveCountDown;
- (void)onSurviveOverTime;
- (void)beginTrack;
- (void)onLiveCaptureSampleBufferOutput:(struct opaqueCMSampleBuffer { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
