@class MAVVideoComposition, NSArray, AVAsset, VideoEncodeTask;

@interface WCFinderPreviewEditVideoCompositionTask : WCSightVideoCompositeTask

@property (nonatomic) struct CGSize { double width; double height; } previewThumbSize;
@property (nonatomic) BOOL shouldUseMAVCompositionLib;
@property (retain, nonatomic) MAVVideoComposition *mavLibComposition;
@property (copy, nonatomic) NSArray *mavLibOriginalVideoPathList;
@property (nonatomic) struct CGPoint { double x; double y; } mavLibEmotionOffset;
@property (copy, nonatomic) NSArray *selectedPreviewAssetInfoList;
@property (retain, nonatomic) AVAsset *compositedPreviewVideoAsset;
@property (retain, nonatomic) VideoEncodeTask *encodeTask;
@property (nonatomic) BOOL isPreCompressUpload;
@property (nonatomic) unsigned long long preCompressCount;
@property (copy, nonatomic) id /* block */ videoProgressCallback;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (nonatomic) unsigned long long enterScene;

+ (id)generateFinderConstrainFromMergedImageFromImageList:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;

- (id)initWithTaskId:(id)a0 srcPHAsset:(id)a1 editVideoAttr:(id)a2 compositionAttr:(id)a3 previewThumbImageSize:(struct CGSize { double x0; double x1; })a4;
- (id)yy_modelDeepCopyWithConfigTag:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getPreparedAssetFileURL;
- (void)prepareTaskWithBlock:(id /* block */)a0;
- (BOOL)removeLocalCache;
- (id)generatePreviewImageAtStartTime:(double)a0;
- (struct CGSize { double x0; double x1; })_getEditedAssetSize;
- (void)_prepareEditAttrWithResultBlock:(id /* block */)a0;
- (id)taskId;
- (long long)taskType;
- (BOOL)isValid;
- (void)onTaskPending;
- (void)onTaskReady;
- (void)onTaskStarted;
- (void)onTaskStoppedWithResult:(id)a0 session:(id)a1;
- (void)onTaskInterrupted;
- (void)onTaskDetached;
- (id)getThumbImageForEditVideoFromPath:(id)a0;
- (void)reportCompositionFailed;
- (id)generatePreviewImage;
- (void).cxx_destruct;

@end
