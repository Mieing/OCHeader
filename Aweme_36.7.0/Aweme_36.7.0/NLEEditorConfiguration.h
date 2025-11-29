@class VEEditorSessionConfig, NSString, IESMMImageMovieInfo;

@interface NLEEditorConfiguration : NSObject

@property (nonatomic) BOOL crossplatInput;
@property (nonatomic) BOOL crossplatCompile;
@property (nonatomic) BOOL notSupportCrossplat;
@property (nonatomic) BOOL crossplatMultiTrack;
@property (nonatomic) BOOL isRecordFromCamera;
@property (nonatomic) BOOL enableStikerSynchronization;
@property (retain, nonatomic) IESMMImageMovieInfo *imageMovieInfo;
@property (retain, nonatomic) VEEditorSessionConfig *veConfig;
@property (nonatomic) BOOL isCutSame;
@property (nonatomic) BOOL isDuet;
@property (nonatomic) BOOL enableAdpatOldFields;
@property (nonatomic) unsigned long long stickerNormalizMode;
@property (nonatomic) BOOL enableCompileOnMainthread;
@property (nonatomic) BOOL enableStickerCommitOpt;
@property (nonatomic) BOOL enableCoexistGlobalEffect;
@property (nonatomic) BOOL enableRemoveCompileFileOpt;
@property (nonatomic) BOOL enableResetCompileSetting;
@property (nonatomic) BOOL enableUUIDAsStickerId;
@property (nonatomic) BOOL enableCompileLock;
@property (nonatomic) BOOL enableSyncModelInAudio;
@property (nonatomic) BOOL enableGlobalEffectInMultitrack;
@property (nonatomic) BOOL enableHotUpdate;
@property (nonatomic) BOOL enableIsolateEditAndPublishEditorReleaseUnusedMemory;
@property (nonatomic) BOOL enableResourceAsyncRender;
@property (nonatomic) BOOL resourceFinderUseUUID;
@property (nonatomic) BOOL enableGetStateLock;
@property (nonatomic) BOOL enableImageTemplateConfig;
@property (nonatomic) BOOL enableUseOriginTextTmeplatParam;
@property (nonatomic) BOOL usingDefaultFpsToMinus1;
@property (nonatomic) double minFps;
@property (nonatomic) double maxFps;
@property (nonatomic) BOOL enableRenderWithStageModel;
@property (nonatomic) BOOL enableMeasureOptimiztion;
@property (nonatomic) BOOL enableOptSmallImagePreview;
@property (nonatomic) BOOL enablePreviewWhenStartCompile;
@property (nonatomic) BOOL enableGetEffectSpaceWithCanvasSize;
@property (nonatomic) BOOL forceRenderEffectFilterForFirstThreeFrames;
@property (nonatomic) BOOL enableGetFirstFrameOptimize;
@property (nonatomic) BOOL enableCapturePreviewForImage;
@property (nonatomic) BOOL enableClearStickerPositionCache;
@property (nonatomic) BOOL enableStickerAdjustOffset;
@property (nonatomic) BOOL isGetViewSizeByBounds;
@property (retain, nonatomic) NSString *vqScoreOmniModelPath;
@property (nonatomic) BOOL enableComposerSaveInTheVEModel;

- (void).cxx_destruct;
- (id)init;

@end
