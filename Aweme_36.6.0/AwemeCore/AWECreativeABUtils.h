@interface AWECreativeABUtils : NSObject

+ (BOOL)enableIsolateEditAndPublishEditorWithPublishModel:(id)a0;
+ (BOOL)enableMergeResolutionOptimize;
+ (BOOL)enableMergeResolutionOptimizeWithPublishModel:(id)a0;
+ (BOOL)enableLivephotoMergeResolutionOptimizeWithPublishModel:(id)a0;
+ (BOOL)enableTemplateMergeResolutionOptimizeWithPublishModel:(id)a0;
+ (BOOL)enableTemplateMergeMinResolutionLimitWithPublishModel:(id)a0;
+ (double)templateMergeMinResolution;
+ (BOOL)enableImageContentModeOptimize;
+ (BOOL)enablePhotoToVideoCanvasOptimizeWithPublishModel:(id)a0;
+ (BOOL)enableMultiCreateAwemePublishReviewDataSplit;
+ (BOOL)currentIsAIGCPathWithPublishViewModel:(id)a0;
+ (BOOL)enableEditAndPublishEditorParallel;
+ (BOOL)enableActiveEditEditorWithPublishModel:(id)a0;
+ (BOOL)enableDraftUsageOptimizeMasterSwitch;
+ (BOOL)enableAccelerateDraftCleaningCycle;
+ (BOOL)enableEditAndPublishEditorParallelWithPublishModel:(id)a0;
+ (BOOL)enableDeactiveEditEditorWithPublishModel:(id)a0;
+ (BOOL)enableActiveEditEditorFixWithPublishModel:(id)a0;
+ (BOOL)enableIsolateEditAndPublishEditorReuseEditServiceWithPublishModel:(id)a0;
+ (BOOL)enableIsolateEditAndPublishEditorChooseCoverWithPublishModel:(id)a0;
+ (BOOL)enableHardLinkForMusicResourceOfIncrementalDraft;
+ (BOOL)enableHardLinkForMusicResourceOfExistingDraft;
+ (long long)draftRetentionDurationWhenCanDeleteNow;
+ (long long)draftDiskUsageOptimizationTaskExecutionDelayTime;
+ (BOOL)enableAUCFeatureConfig;
+ (BOOL)enableAddDraftTrackParams;
+ (id)userExceptionConfig;
+ (BOOL)enableStory2025DraftFallbackRecovery;
+ (BOOL)enablePublishCanvasOptimize;
+ (BOOL)enablePublishPreviewCoverIssueFix;
+ (BOOL)enableStory2025PublishProgressViewNewUI;

@end
