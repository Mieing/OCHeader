@class OMJMaasCore, OMJTemplateInfo, MJTemplateAsyncExportInfo, OMJMusicInfo, NSString, UIImage;

@interface MJTemplateCompositeTask : WCSightVideoCompositeTask

@property (retain, nonatomic) OMJMaasCore *maasCore;
@property (retain, nonatomic) MJTemplateAsyncExportInfo *asyncExportInfo;
@property (retain, nonatomic) OMJTemplateInfo *templateInfo;
@property (retain, nonatomic) OMJMusicInfo *musicInfo;
@property (copy, nonatomic) NSString *exportFilePath;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) double templateCompositeProgress;
@property (copy, nonatomic) id /* block */ resultBlock;

- (id)initWithTaskId:(id)a0 maasCore:(id)a1 asyncExportInfo:(id)a2 templateInfo:(id)a3 musicInfo:(id)a4 exportFilePath:(id)a5;
- (BOOL)isValid;
- (void)willAddIntoTrash;
- (void)didGenerateNewAsyncTaskID:(id)a0;
- (void)prepareTaskWithBlock:(id /* block */)a0;
- (BOOL)removeLocalCache;
- (id)getPreparedAssetFileURL;
- (double)videoDuration;
- (id)generateWidgetCanvasView;
- (id)generatePreviewImage;
- (id)getThumbImageForEditVideoFromPath:(id)a0;
- (void)setupSightDraft:(id)a0;
- (long long)taskType;
- (BOOL)shouldSaveExportVideoToLibrary;
- (void)onTaskStarted;
- (void)onTaskReady;
- (void)onTaskStoppedWithResult:(id)a0 session:(id)a1;
- (void)onTaskInterrupted;
- (void)onTaskDetached;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)templateCoreManager:(id)a0 exportTaskDidFinishWithTaskID:(id)a1 outputFilePath:(id)a2;
- (void)templateCoreManager:(id)a0 exportTaskDidFailWithTaskID:(id)a1 error:(id)a2;
- (void)templateCoreManager:(id)a0 exportTaskDidCancelWithTaskID:(id)a1;
- (void)templateCoreManager:(id)a0 exportProgressDidChange:(float)a1 taskID:(id)a2;
- (double)currentCompositeProgress;
- (void)templateCoreManager:(id)a0 videoFrameDidUpdate:(id)a1 taskID:(id)a2;
- (void).cxx_destruct;

@end
