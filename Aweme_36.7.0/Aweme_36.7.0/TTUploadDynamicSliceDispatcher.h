@class TTUploadFileManager, NSMutableDictionary, TTUploadTaskParam, NSObject, TTUploadTTNetTask;
@protocol OS_dispatch_source;

@interface TTUploadDynamicSliceDispatcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *sliceTaskDic;
@property (retain, nonatomic) TTUploadFileManager *fileManager;
@property (copy) id /* block */ onDispatcherCompletedBlock;
@property (copy) id /* block */ onProgressBlock;
@property (retain) TTUploadTaskParam *userParam;
@property BOOL isCancel;
@property (retain) NSObject<OS_dispatch_source> *progressTimer;
@property long long lastHadUploadedLength;
@property (weak) TTUploadTTNetTask *task;

- (void)applicationEnterBackground;
- (void)makeProgressInfo:(BOOL)a0;
- (void)tryStartNewSliceTask;
- (void)createSliceTaskAndStart:(id)a0;
- (void)saveErrorResponse:(id)a0 code:(long long)a1 sliceInfo:(id)a2;
- (void)checkUploadCompleted;
- (id)initWithUploadInfo:(id)a0 serverResponse:(id)a1 userParam:(id)a2 onDispatcherEndBlock:(id /* block */)a3 progressBlock:(id /* block */)a4;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
