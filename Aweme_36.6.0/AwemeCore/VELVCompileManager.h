@class HTSVideoData, VECompileSession, VEEditorSession, VEVideoFillConfig;

@interface VELVCompileManager : IESMMObject

@property (nonatomic) long long encodeStatus;
@property (nonatomic) double startTime;
@property (retain, nonatomic) VEEditorSession *editorSession;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) VECompileSession *compileSession;
@property (nonatomic) int exportFps;
@property (nonatomic) BOOL enableOptExportFps;
@property (nonatomic) double timeOutPeriod;
@property (nonatomic) BOOL onlyVideo;
@property (nonatomic) BOOL infostickerTextureRelease;
@property (nonatomic) BOOL disableEffectProcess;
@property (nonatomic) unsigned long long fileType;
@property (nonatomic) int gifFPS;
@property (nonatomic) int loopCount;
@property (copy, nonatomic) id /* block */ faceDetectEvent;
@property (retain, nonatomic) VEVideoFillConfig *videoFillConfig;

- (void)getPreviewImage:(id /* block */)a0;
- (id)initWithVideoData:(id)a0;
- (void)cancelTranscode:(id /* block */)a0;
- (void)p_createEditorSession:(id)a0;
- (void)mergeCompleteWithRes:(id)a0 progress:(int)a1 completeBlock:(id /* block */)a2;
- (BOOL)checkUseFenceRender:(struct CGSize { double x0; double x1; })a0;
- (void)transWithprogressBlock:(id /* block */)a0 completeBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
