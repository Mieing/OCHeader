@class NSString, UIImage, MJMovieComposingAsyncExportInfo;

@interface MJPublisherMovieCompositionTask : WCFinderPreviewEditVideoCompositionTask

@property (retain, nonatomic) NSString *exportFilePath;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) MJMovieComposingAsyncExportInfo *asyncExportInfo;
@property (copy, nonatomic) id /* block */ resultBlock;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskID:(id)a0 srcPHAsset:(id)a1 asyncExportInfo:(id)a2 previewThumbImageSize:(struct CGSize { double x0; double x1; })a3;
- (id)generatePreviewImageAtStartTime:(double)a0;
- (id)generatePreviewImage;
- (id)coverImagePath;
- (void)didGenerateNewAsyncTaskID:(id)a0;
- (id)getPreparedAssetFileURL;
- (void)prepareTaskWithBlock:(id /* block */)a0;
- (BOOL)removeLocalCache;
- (id)taskId;
- (long long)taskType;
- (BOOL)isValid;
- (BOOL)shouldSaveExportVideoToLibrary;
- (void)onTaskPending;
- (void)onTaskReady;
- (void)onTaskStarted;
- (void)onTaskStoppedWithResult:(id)a0 session:(id)a1;
- (void)onTaskInterrupted;
- (void)onTaskDetached;
- (void)willAddIntoTrash;
- (void)templateCoreManager:(id)a0 exportTaskDidFinishWithTaskID:(id)a1 outputFilePath:(id)a2;
- (void)templateCoreManager:(id)a0 exportTaskDidFailWithTaskID:(id)a1 error:(id)a2;
- (void)templateCoreManager:(id)a0 exportTaskDidCancelWithTaskID:(id)a1;
- (void)templateCoreManager:(id)a0 exportProgressDidChange:(float)a1 taskID:(id)a2;
- (void)templateCoreManager:(id)a0 videoFrameDidUpdate:(id)a1 taskID:(id)a2;
- (double)exportVideoDuration;
- (void)reportEventWithName:(id)a0 taskID:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
