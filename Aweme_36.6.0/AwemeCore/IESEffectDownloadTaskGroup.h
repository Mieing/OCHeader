@class IESEffectModelDownloadTask, IESManifestManager, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESEffectDownloadTaskGroup : NSObject

@property (retain, nonatomic) IESEffectModelDownloadTask *effectDownloadTask;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long effectDownloadFinishCount;
@property (retain, nonatomic) NSMutableArray *resultCompletions;
@property (retain, nonatomic) NSError *effectDownloadError;
@property (nonatomic) double effectDownloadTotalTime;
@property (nonatomic) double beginDownloadTimeStamp;
@property (weak, nonatomic) IESManifestManager *manifestManager;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (nonatomic) long long downloadPauseThresholdSize;

- (void)updateMainDownloadTask:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)resumeDownloadTaskWithEffectModel:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)notifyTaskFinishProcessWithError:(id)a0 downloadCostTime:(double)a1 extraInfoDict:(id)a2;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)cancel;

@end
