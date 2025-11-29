@class IESSoloKTVTemplateMainModel, IESSoloKTVVideoEditManager, NSString, NSError, IESLiveSoloKTVExportOperation, IESSoloKTVDraftMainModel, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESSoloKTVSaveSmallViewModel : NSObject

@property (retain, nonatomic) IESSoloKTVDraftMainModel *draftModel;
@property (retain, nonatomic) IESSoloKTVTemplateMainModel *templateModel;
@property (retain, nonatomic) IESSoloKTVVideoEditManager *editManager;
@property (nonatomic) long long taskType;
@property (nonatomic) float exportWeight;
@property (nonatomic) float taskCompletedProgress;
@property (copy, nonatomic) NSString *taskFilePath;
@property (copy, nonatomic) id /* block */ taskCompletion;
@property (copy, nonatomic) id /* block */ taskProgressBlock;
@property (retain, nonatomic) NSMutableArray *ops;
@property (retain, nonatomic) IESLiveSoloKTVExportOperation *baseOpetaion;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *saveVideoSemaphore;
@property (retain, nonatomic) NSError *saveError;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double startSaveInterval;
@property (nonatomic) long long karaokeId;

- (id)publishTrackExtra;
- (id)initWithDraftModel:(id)a0 templateModel:(id)a1 trackParams:(id)a2;
- (void)exportVideoWithTaskType:(long long)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)cancelAllTaskWithIsClose:(BOOL)a0;
- (void)cancelExportOperationWithTaskType:(long long)a0;
- (BOOL)appendTaskWithTaskType:(long long)a0;
- (void)cancelAllTaskWithError:(id)a0;
- (void)invokeTaskCompletionWithError:(id)a0 failType:(long long)a1;
- (void)trackVideoSaveCloseWithPage:(id)a0;
- (void)updateExportTaskWeight;
- (id)createOpeationWithTaskType:(long long)a0;
- (void)runExportVideoTaskV2;
- (void)runSaveVideoTask;
- (void)runPublishVideoTask;
- (void)runSaveDraftTask;
- (id)findOperationInOpsWithTaskType:(long long)a0;
- (SEL)selectorWithTaskType:(long long)a0;
- (void)monitroTaskWithTaskType:(long long)a0 startInterval:(double)a1 success:(BOOL)a2 error:(id)a3 extra:(id)a4;
- (unsigned long long)dispatchTimeWithTime:(double)a0;
- (void)handleWaitingTimeOutWithTaskType:(long long)a0 startTimeInterval:(double)a1;
- (id)createPublishConfig;
- (void)handleWithPublishTextConfig:(id)a0 tagsArray:(id)a1 content:(id)a2;
- (id)trackFailTypeStringWithType:(long long)a0;
- (void)trackVideoSaveResult:(BOOL)a0 failType:(id)a1 reason:(id)a2;
- (void)trackVideoSaveDuration:(long long)a0;
- (BOOL)checkPublishTextRuleWithStartTimeStamp:(long long)a0 endTimeStamp:(long long)a1 condition:(id)a2 type:(long long)a3;
- (void)handleWithRules:(id)a0 action:(id /* block */)a1;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (void)dealloc;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
