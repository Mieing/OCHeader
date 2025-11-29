@class NSEnumerator, NSString, AWEMediaDownloadResultInnerItem, NSMutableArray, AWEMediaDownloadConfig;
@protocol AWEMediaDownloadStage;

@interface AWEMediaDownloadTask : NSObject <AWEMediaDownloadStageDelegate>

@property (retain, nonatomic) NSEnumerator *stageEnumerator;
@property (retain, nonatomic) NSMutableArray *mutableStages;
@property (retain, nonatomic) AWEMediaDownloadResultInnerItem *item;
@property (retain, nonatomic) id<AWEMediaDownloadStage> currentStage;
@property (nonatomic) long long currentStatus;
@property (nonatomic) double lastStageProgress;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) id<AWEMediaDownloadStage> currentProgressStage;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) AWEMediaDownloadConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadStage:(id)a0 didChangeProgress:(double)a1;
- (void)downloadStageWillRun:(id)a0;
- (void)downloadStage:(id)a0 didFinishWithResult:(unsigned long long)a1 error:(id)a2;
- (void)insertStage:(id)a0 atIndex:(long long)a1;
- (void)appendStage:(id)a0;
- (void)handleProgressChange:(double)a0;
- (id)allStages;
- (void)prepareToExcute;
- (BOOL)continueToNextStage;
- (BOOL)shouldRunStage:(id)a0;
- (void)runStage:(id)a0;
- (void)handleProgressChangeWithStage:(id)a0 didChangeProgress:(double)a1;
- (long long)allStageProgressCount;
- (void)excute;
- (void).cxx_destruct;
- (void)finishWithResult:(long long)a0 error:(id)a1;
- (id)init;
- (void)cancel;

@end
